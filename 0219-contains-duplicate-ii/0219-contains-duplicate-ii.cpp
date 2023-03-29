class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>un;
        for(int i=0;i<nums.size();i++){
            if(un.count(nums[i])>0&&abs(un[nums[i]]-i)<=k){
                return true;
            }
            un[nums[i]]=i;
        }
      return false;      
        
    }
};