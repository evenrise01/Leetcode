class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> imap;
        for (int i = 0;; ++i) {
        auto it = imap.find(target - nums[i]);
        
            // it == imap.end() --> 'it' is pointing at the end
        if (it != imap.end()) 
            return vector<int> {it->second, i};
            
        imap[nums[i]] = i;
        }
    }
};