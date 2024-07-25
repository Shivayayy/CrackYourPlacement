class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int elem =0 ,count =0;
        for(int i=0;i<nums.size();i++)
        {
            if(!count)
            {
                count =1;
                elem =nums[i];
            }
            else if(nums[i] == elem)count++;
            else count--;
        }
        return elem;
    }
};