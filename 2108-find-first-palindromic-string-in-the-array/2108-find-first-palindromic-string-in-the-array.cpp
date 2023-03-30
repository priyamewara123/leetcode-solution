
class Solution {
    int palindrome(string s){
            int l=0;
            int r=s.size()-1;
                while(l<=r){
                if(s[l]==s[r]){
                l++;
                 r--;
                }
                else{
                    return -1;
                }
        }
        return 1;

    }
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++){
            string str=words[i];
          if(palindrome(str)==1){
              return str;
          }
        }
    return "";
    }
};