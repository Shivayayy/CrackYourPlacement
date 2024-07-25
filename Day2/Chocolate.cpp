class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        sort(a.begin(),a.end());
        long long ans =INT_MAX;
        for(long long i=0;i<=n-m;i++)
        {
            long long ind =i+m-1;
            long long diff =a[ind]-a[i];
            if(diff<ans)
            {
                ans =diff;
            }
            
        }
        return ans;
    
    }   
};