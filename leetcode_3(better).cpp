class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxx = INT_MIN;
        int len = 0;
        for(int i=0;i<s.length();i++)
        {
            vector<int> hash(255,0);
            for(int j=i;j<s.length();j++)
            {
                if(hash[s[j]]==1)
                {
                    break;
                }else{
                    len = j-i+1;
                    maxx = max(len,maxx);
                    hash[s[j]]=1;
                }
            }
        }
        return maxx;
    }
};