#include<bits/stdc++.h>
using namespace std;
int main()
{
    

    int t;
    cin>>t;

    while (t--)
    {
    

        int n;
        cin>>n;

        string s;
        cin>>s;

        bool hasZero =false;
        for(char c: s){
            if(c=='0'){
                hasZero=true;
                break;
            }
        }

        if(hasZero){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}