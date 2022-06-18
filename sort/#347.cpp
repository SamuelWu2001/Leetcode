bool cmp(pair<int, int>& a,pair<int, int>& b){
    return a.second > b.second;
}
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<pair<int, int> > A;
        vector<int> R;
        pair<int,int> a;
        int index = 0;
        int value = nums.front();
        int count = 0;
        for(int i:nums){
            if(value==i)count++;
            else{
                a.first = value;
                a.second = count;
                A.push_back(a);
                value = i;
                count = 1;
            }
        }
        a.first = value;
        a.second = count;
        A.push_back(a);
        sort(A.begin(),A.end(),cmp);
        while(R.size()<k){
            R.push_back(A[index].first);
            index++;
        }
        return R;
    }
};
