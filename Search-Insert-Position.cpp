class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        long long int left, right, mid;
        long long int n = nums.size();
        left = 0;
        right = n-1;
        
        while (left <= right){
            mid = left + (right - left)/2;
            if (nums[mid] == target){
                return mid;
            }
            if (nums[mid] < target){
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }

        }
                    
            return left;
    }
};
