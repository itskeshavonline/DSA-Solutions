class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // Sort by weight
        sort(people.begin(), people.end());
        
        int left = 0;
        int right = people.size() - 1;
        int boats = 0;
        
        while (left <= right) {
            // If the lightest and heaviest person can share a boat
            if (people[left] + people[right] <= limit) {
                left++; 
            }
            // The heaviest person always gets a boat
            right--; 
            boats++;
        }
        
        return boats;
    }
};
