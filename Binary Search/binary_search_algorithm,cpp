class Solution {
public:
    int search(vector<int>& nums, int target) {    //iterative approach
        int st=0, end=nums.size()-1;

        while(st <= end) {
            int mid = st+(end-st)/2;

            if (target > nums[mid]) {
                st = mid+1;  //2nd half
            } else if (target < nums[mid]) {
                end = end-1;    //1st half
            } else {
                return mid;
            }
        }
        return -1;
    }
};
