class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        map<int,int> a,b;
        for(int i=0;i<26;i++){
            a[i]=0;
            b[i]=0;
        }
        for(int i=0;i<s.length();i++){
            a[s[i]-'a']++;
            b[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
    }
};
