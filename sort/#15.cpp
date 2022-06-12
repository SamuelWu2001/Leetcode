class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector< vector<int> > R;
        vector<int> r;
        if(nums.size()<3) return R;
        sort(nums.begin(),nums.end());
        unordered_map<int,int> a;
        int oldnum1 = nums.front()-1;
        int oldnum2 = nums.front()-1;
        
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }
        cout<<"0,"<<a[0]<<endl;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)break;
            if(oldnum1==nums[i])continue;
            oldnum1 = nums[i];
            oldnum2 = nums.front()-1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]>0)break;
                if(oldnum2==nums[j])continue;
                oldnum2 = nums[j];
                a[nums[i]]--;
                a[nums[j]]--;
                if(a[(nums[i]+nums[j])*-1]>0 && (nums[i]+nums[j])*-1>=nums[j]){
                    cout<<"success"<<endl;
                    r.push_back(nums[i]);
                    r.push_back(nums[j]);
                    r.push_back((nums[i]+nums[j])*-1);
                    R.push_back(r);
                    r.clear();
                }
                a[nums[i]]++;
                a[nums[j]]++;
            }
        }
        return R;
    }
};
