class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=0, max_sum = nums[0];
        for(int n: nums){
            curr += n;
            max_sum = max(max_sum,curr);
            if(curr < 0) curr = 0;
        }
        return max_sum;
    }
};
