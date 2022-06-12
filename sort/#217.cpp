class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> a;
        for(int i=0;i<nums.size();i++){
            if(a.count(nums[i])>0){
                return true;   
            }
            else{
                a[nums[i]] = 0;
            }
        }
        return false;
    }
};
