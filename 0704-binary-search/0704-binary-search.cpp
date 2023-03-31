class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int m=(l+r)/2;
        while(l<=r){
            
            if(target==nums[m]){
                return m;
            }
            else if(target>nums[m]){
                l=m+1;
            }
            else{
                r=m-1;
            }
           m=(l+r)/2;
        }
        return -1;
    }
};