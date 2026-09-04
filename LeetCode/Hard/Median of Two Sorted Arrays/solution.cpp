class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        int mid = (n + m) / 2;
        int idx1 = -1, idx2 = -1; // Initialize to prevent garbage values
        int element1 = 0, element2 = 0;
        
        if ((n + m) % 2 == 1) {
            idx2 = mid;
        } else {
            idx1 = mid - 1; 
            idx2 = mid;
        }

        int i = 0, j = 0, count = 0;

        while (i < n && j < m) {
            int currentVal;
            if (nums1[i] < nums2[j]) {
                currentVal = nums1[i];
                i++;
            } else {
                currentVal = nums2[j];
                j++;
            }
            
            // Check BOTH indices regardless of where currentVal came from
            if (count == idx1) element1 = currentVal;
            if (count == idx2) element2 = currentVal;
            count++;
        }

        while (i < n) {
            if (count == idx1) element1 = nums1[i];
            if (count == idx2) element2 = nums1[i];
            i++;
            count++;
        }

        while (j < m) {
            if (count == idx1) element1 = nums2[j];
            if (count == idx2) element2 = nums2[j];
            j++;
            count++;
        }
        
        if ((n + m) % 2 == 1) return element2;

        return (double)(element1 + element2) / 2.0;
    }
};