#include<algorithm>
#include<vector>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int index = nums.size()/2;
        int num = nums[index];
        return num;
    }
};
