class Solution {
public:
    bool isPalindrome(string str) {
    string temp = str;
    reverse(temp.begin(), temp.end());
    return str == temp;
}
    string longestPalindrome(string s) {
        string str;
        string anss;
        int maxlen = 0;
        for(int i=0;i<s.length();i++)
        {
            str.clear();
            for(int j=i;j<s.length();j++)
            {
                str+=s[j];
                bool ans = isPalindrome(str);
                if(ans)
                {
                    if(str.length()>maxlen)
                    {
                        maxlen = str.length();
                        anss = str;
                    }
                }
            }
        }
        return anss;
    }
};