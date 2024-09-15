// https://www.geeksforgeeks.org/problems/count-number-of-substrings4528/1

class Solution
{
  public:
  
    long long int atMostKDistinct(const string& s, int k){
        int n = s.size();
    	vector<int> freq(26,0);
    	int left = 0, right=0;
    	long long int count = 0;
    	int distinctCount = 0;
    	
    	while(right<n){
    	    if(freq[s[right]-'a'] ==0) distinctCount++;
    	    
    	    freq[s[right] - 'a']++;
    	    right++;
    	    
    	    while(distinctCount > k){
    	        freq[s[left] - 'a']--;
    	        if(freq[s[left]-'a'] == 0){
    	            distinctCount--;
    	        }
    	        left++;
    	    }
    	    count += (right-left);
    	}
    	return count;
    }
    long long int substrCount (string s, int k) {
    	return atMostKDistinct(s, k) - atMostKDistinct(s, k - 1);
    }
};