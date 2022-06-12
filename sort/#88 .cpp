#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int c1 = m-1;
        int c2=n-1;
        for(int i=m+n-1;i>=0;i--){
            if(c1<0){
                nums1[i] = nums2[c2];
                c2 --;
            }
            else if(c2<0){
                nums1[i] = nums1[c1];
                c1 --;
            }
            else if(nums1[c1]>=nums2[c2]){
                nums1[i] = nums1[c1];
                c1 --;
            }
            else{
                nums1[i] = nums2[c2];
                c2 --;
            }
        }
    };
    
};
