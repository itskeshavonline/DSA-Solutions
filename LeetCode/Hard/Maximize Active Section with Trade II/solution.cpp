// Sparse Table for O(1) Range Maximum Query over adjacent zero-group sums
class SparseTable {
private:
    int n;
    vector<vector<int>> st;

public:
    SparseTable(const vector<int>& nums) {
        n = nums.size();
        if (n == 0) return;
        
        int maxLog = 32 - __builtin_clz(n);
        st.assign(maxLog, vector<int>(n, 0));
        
        for (int j = 0; j < n; ++j) {
            st[0][j] = nums[j];
        }
        for (int i = 1; i < maxLog; ++i) {
            for (int j = 0; j + (1 << i) <= n; ++j) {
                st[i][j] = max(st[i - 1][j], st[i - 1][j + (1 << (i - 1))]);
            }
        }
    }

    int query(int l, int r) const {
        if (n == 0 || l > r || l < 0 || r >= n) return 0;
        int len = r - l + 1;
        int k = 31 - __builtin_clz(len);
        return max(st[k][l], st[k][r - (1 << k) + 1]);
    }
};

struct Group {
    int start;
    int length;
};

class Solution {
public:
    vector<int> maxActiveSectionsAfterTrade(string s, vector<vector<int>>& queries) {
        int n = s.length();
        int totalOnesInS = 0;
        
        // 1. Count original '1's in the ENTIRE string
        for (char c : s) {
            if (c == '1') totalOnesInS++;
        }

        // 2. Identify zero-groups and build lookups
        vector<Group> zeroGroups;
        vector<int> groupAt(n, -1);
        vector<int> prevGroup(n, -1);
        int currentGroup = -1;

        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') {
                if (i > 0 && s[i - 1] == '0') {
                    zeroGroups.back().length++;
                } else {
                    zeroGroups.push_back({i, 1});
                    currentGroup++;
                }
                groupAt[i] = currentGroup;
            }
            prevGroup[i] = currentGroup;
        }

        // 3. Precompute lengths of adjacent zero-groups merged
        int numZeroGroups = zeroGroups.size();
        vector<int> zeroMergeLengths;
        if (numZeroGroups > 1) {
            zeroMergeLengths.resize(numZeroGroups - 1);
            for (int i = 0; i + 1 < numZeroGroups; ++i) {
                zeroMergeLengths[i] = zeroGroups[i].length + zeroGroups[i + 1].length;
            }
        }

        SparseTable st(zeroMergeLengths);
        vector<int> ans;
        ans.reserve(queries.size());

        // 4. Answer each query
        for (const auto& q : queries) {
            int l = q[0], r = q[1];
            
            int leftGroup = groupAt[l];
            int rightGroup = groupAt[r];

            // Truncate lengths if groups bleed outside query boundaries
            int leftLen = 0, rightLen = 0;
            if (leftGroup != -1) {
                leftLen = zeroGroups[leftGroup].start + zeroGroups[leftGroup].length - l;
            }
            if (rightGroup != -1) {
                rightLen = r - zeroGroups[rightGroup].start + 1;
            }

            // Case A: Just one zero group spans this entire range (no valid trade inside)
            if (leftGroup != -1 && leftGroup == rightGroup) {
                ans.push_back(totalOnesInS);
                continue;
            }

            // Define `a` and `b` as the boundaries of the FULLY ENCLOSED zero-groups
            int a = prevGroup[l] + 1;
            int b = (rightGroup != -1) ? rightGroup - 1 : prevGroup[r];

            int maxGain = 0;

            // Case B: Max merge between two fully enclosed adjacent zero-groups
            if (a <= b - 1) {
                maxGain = max(maxGain, st.query(a, b - 1));
            }

            // Case C: Merge the left boundary group with the first fully enclosed group
            if (leftGroup != -1 && a <= b) {
                maxGain = max(maxGain, leftLen + zeroGroups[a].length);
            }

            // Case D: Merge the right boundary group with the last fully enclosed group
            if (rightGroup != -1 && a <= b) {
                maxGain = max(maxGain, zeroGroups[b].length + rightLen);
            }

            // Case E: Merge the left boundary group DIRECTLY with the right boundary group
            if (leftGroup != -1 && rightGroup != -1 && leftGroup + 1 == rightGroup) {
                maxGain = max(maxGain, leftLen + rightLen);
            }

            ans.push_back(totalOnesInS + maxGain);
        }

        return ans;
    }
};