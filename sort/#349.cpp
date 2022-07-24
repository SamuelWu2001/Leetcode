class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> uniqueNums1;
        set<int> uniqueNums2;
        vector<int> result;
        for(auto &num1:nums1)
            uniqueNums1.insert(num1);
        for(auto &num2:nums2)
            uniqueNums2.insert(num2);
        for(auto &uniqueNum1:uniqueNums1){
            if(uniqueNums2.find(uniqueNum1) != uniqueNums2.end())
                result.push_back(uniqueNum1);
        }
        return result;
    }
};
