class Solution {
public:
    bool isHappy(int n) {
        set<int> s;

        int sum = 0;
        while(n!=1)
        {
            if(s.count(n))
            {
                return false;
            }
            s.insert(n);
            sum = 0;
            while(n>0)
            {
                int a = n%10;
                sum+=a*a;
                n = n / 10;
            }
            n = sum;
        }
        return true;
    }
};