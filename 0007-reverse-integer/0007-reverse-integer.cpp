class Solution {
public:
    int reverse(int x) {
        long sum=0;
        int r,temp;
        temp=x;
    
            x=abs(x);
            while(x>0){
            r=x%10;
            sum=(sum*10)+r;
                
            x=x/10;
            }
         if(sum>=INT_MAX){
             return 0;
         }
        else{
       
       if(temp<0){
         return sum*(-1);
           }
        else
       {
          return sum;
        }
    }
    }
};