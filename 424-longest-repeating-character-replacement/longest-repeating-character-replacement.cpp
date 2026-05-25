class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int freq[26]={0};
        int left=0,right=0;
        int maxfreq=0,maxlength=0;
        for(int right=0;right<n;right++){
            freq[s[right]-'A']++;
            maxfreq=max(maxfreq,freq[s[right]-'A']);
            while(((right-left+1)-maxfreq)>k){
                freq[s[left]-'A']--;
                left++;
            }
            maxlength=max(maxlength,(right-left+1));
        }
        return maxlength;
    }
};