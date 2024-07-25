class Solution
{
public:
   bool canJump(vector<int>& arr) 
    {
        int n = arr.size();
        int maxindex = 0;
        for(int i=0;i<n;i++)
        {
            if(i>maxindex) return false;
            maxindex = max(maxindex, i+arr[i]);
        }
        return true;
    }
};