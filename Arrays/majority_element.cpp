// Problem : Majority Element
// Approach : Moore's Voting Element
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans = 0;

        for(int i=0; i<nums.size(); i++) {
            if(freq == 0) {
                ans = nums[i];
            }
            if(ans == nums[i]) {
               freq++;
            } else{
                freq--;
            }
        }
        return ans++;
    }
};
