//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int i,co1=0,co2=0,co3=0;
        for(i=0;i<n;i++){
            switch(a[i]) {
                case 0:
                    co1++;
                    break;
                case 1:
                     co2++;
                     break;
                case 2:
                     co3++;
                     break;
                
            }
        }
        i=0;
        while(co1>0){
            a[i++]=0;
            co1--;
        }
        while(co2>0){
            a[i++]=1;
            co2--;
        }
        
        while(co3>0){
            a[i++]=2;
            co3--;
        }
        
        
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends