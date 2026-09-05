class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq[26] = {0};  
        
        int left = 0;         
        int maxFreq = 0;     
        int ans = 0;

        for(int right = 0; right < s.length(); right++) {
	            freq[s[right] - 'A']++;
	            
                //freq of any one specific character
	            maxFreq = max(maxFreq, freq[s[right] - 'A']);
	
	            while((right - left + 1) - maxFreq > k) {
		                freq[s[left] - 'A']--;
		                left++;                 
	            }

            // ab jo bhi window valid hai, uski length se answer update karo
            ans = max(ans, right - left + 1);
        }
        
        return ans;
    }
};

