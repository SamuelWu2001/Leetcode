class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> R;
        vector<int> a;
        vector<int> r;
        unordered_map<int,int> m;
        for(int i=0;i<intervals.size();i++){
            a.push_back(intervals[i][0]);
            if(intervals[i][1]>m[intervals[i][0]])m[intervals[i][0]] = intervals[i][1];
        }
        sort(a.begin(),a.end());
        for(int i:a){
            cout<<i<<','<<m[i]<<endl;
        }
        for(int i:a){
            if(r.empty()){
                r.push_back(i);
                r.push_back(m[i]);
            }
            else{
                if(i<=r[1]){
                    if(r[0]>i)r[0]=i;
                    if(m[i]>r[1])r[1]=m[i];
                }
                else{
                    R.push_back(r);
                    r[0]=i;
                    r[1]=m[i];
                }
            }       
        }
        R.push_back(r);
        return R;
    }
};
