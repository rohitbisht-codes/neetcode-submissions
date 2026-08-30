class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int expected = 1;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i =0; i<n;i++)
        {
            if(nums[i]==expected)
            {
                expected++;
            }
        }
    return expected;
    }
};