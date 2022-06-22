class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currMax = 0, MaxTillNow = INT_MIN;
        
        for(auto c : nums){
            currMax = max(c, currMax + c);
            MaxTillNow = max(MaxTillNow,currMax);
        }
        return MaxTillNow;
    }
};
