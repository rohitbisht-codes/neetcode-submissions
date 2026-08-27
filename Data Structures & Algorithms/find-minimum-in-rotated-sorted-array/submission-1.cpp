class Solution {
public:
    int findMin(vector<int> &nums) {
        int ans,mid;
        int n = nums.size();
        int start = 0,end = n-1;
        while(start<=end)
        {
            mid = start+(end-start)/2;
            if(nums[0] <= nums[n-1])
            return nums[0];


            if(nums[mid]>=nums[0])
            {
                start = mid+1;
            }
            else
            {
                ans = nums[mid];
                end = mid-1;
            }
        }
        return ans;
        
    }
};
