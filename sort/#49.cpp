class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> M;
        vector<vector<string>> R;
        for(string s:strs){
            string a=s;
            sort(a.begin(),a.end());
            M[a].push_back(s);
        }
        for(auto m:M){
            R.push_back(m.second);
        }
        return R;
    }
};
