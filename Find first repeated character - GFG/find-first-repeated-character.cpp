//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    int n=s.size();
    set<char>m;
    for(int i=0;i<n;i++){
        if(m.find(s[i])!=m.end())
        { string str="";
        char c = s[i];
        str=c;
            return str;
        //   break;
        }
        else{
            m.insert(s[i]);
        }
    }
    return "-1";
}