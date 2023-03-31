class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        
        vector<int>left;
        vector<int>right;
        vector<int>result;
           int l_sum=0;
           int r_sum=0;
        for(int i=0;i<nums.size();i++){
            left.push_back(l_sum);
            right.push_back(r_sum);
            l_sum+=nums[i];
            r_sum+=nums[nums.size()-i-1];
        }
        for(int i=0;i<nums.size();i++){
             
            result.push_back(abs(left[i]-right[nums.size()-1-i]));
        }
        
     return result;   
        
    }
};