class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        int maxx = INT_MIN;
        int s = cardPoints.size()-1;
        for(int i=0;i<k;i++)
        {
            sum+=cardPoints[i];
        }
        maxx = max(sum,maxx);
        for(int j=k-1;j>=0;j--)
        {
            sum-=cardPoints[j];
            sum+=cardPoints[s];
            s--;
            maxx = max(sum,maxx);
        }
        return maxx;
    }
};