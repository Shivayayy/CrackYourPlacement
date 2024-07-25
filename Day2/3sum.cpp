class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();)
        {
            int j =i+1;
            int k =nums.size()-1;
            while(j<k)
            {
                int sum =nums[i]+nums[j]+nums[k];
                if(!sum)
                {
                    ans.push_back(vector<int>{nums[i],nums[j],nums[k]});
                    int jNum = nums[j];
                    int kNum = nums[k];
                    while(j<nums.size() && nums[j] == jNum)j++;
                    while(k>=0 && nums[k] == kNum)k--;
                }
                else if (sum>0)k =k-1;
                else j =j +1;
            }
            int iNum =nums[i];
            i =i+1;
            while(i<nums.size() && iNum == nums[i])i++;   
        }
        return ans;
    }
};