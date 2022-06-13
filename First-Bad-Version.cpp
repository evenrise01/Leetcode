// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int left, right, mid;
        left = 1, right = n;
        long int ans = 1;
        
        while(left<=right){
            mid = left + (right-left)/2;
            bool x = isBadVersion(mid);
            if(x==true){
                ans = mid;
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
       return ans;
    }
};
