#include<bits/stdc++.h>
using namespace std;
int main()
{
    

    int n,q;
    
    cin>>n>>q;

    vector<vector<long long>>a(n);

    while (q--)
    {
        
        int type;
        cin>>type;

        if(type==0){
            int t;
            long long x;
            cin>>t>>x;
            a[t].push_back(x);
        }

        else  if(type==1){
            int t;
            cin>>t;

            for(int i=0; i<(int)a[t].size(); i++){

                 if(i>0) cout<<' ';
                 cout<<a[t][i]; 
            }
           cout<<endl;
       }

     

        else if(type==2){
           int t;
           cin>>t;
           a[t].clear();
       }
    }
    
    return 0;
}