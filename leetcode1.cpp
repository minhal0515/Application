class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long c1=0;
        long long s1=0;
        for(long long i=0;i<nums1.size();i++){
            if(nums1[i]==0){
                c1++;
                s1++;
            }
            else{
                s1+=nums1[i];
            }
        }
        long long c2=0;
        long long s2=0;
        for(long long i=0;i<nums2.size();i++){
            if(nums2[i]==0){
                c2++;
                s2++;
            }
            else{
                s2+=nums2[i];
            }
        }
        long long ans=0;
        if(s1==s2){
            ans=s1;
            return ans;
        }
        if(s1<s2){
            if(c1==0){
                return -1; 
            } 
            else{
                return s2;
            }
        }
        else{
            if(c2==0){
                return -1;
            } else{
                return s1;
            }
        }
    }
};