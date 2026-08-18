class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int value : nums)
        {
            int count = 0;
            for(int el : nums)
            {
                if(el==value)
                {
                    count++;
                }
            }
            if(count>n/2)
            {
                return value;
            }
        }
        return -1;
        
    }
};