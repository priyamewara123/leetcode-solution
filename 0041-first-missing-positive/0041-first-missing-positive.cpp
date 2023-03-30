class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        int i=1;
        int n=s.size();
        while(i<=n){
            if(s.find(i)!=s.end()){
                i++;
            }
            else{
                return i;
            }
        }
        return n+1;
    }
};