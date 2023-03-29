class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp;
        // bool flag=false;
        for(int i=0;i<nums.size();i++){
           if(mp[nums[i]]){
               return true;
           } 
              mp[nums[i]]++;
        }
        return false;
    }
};