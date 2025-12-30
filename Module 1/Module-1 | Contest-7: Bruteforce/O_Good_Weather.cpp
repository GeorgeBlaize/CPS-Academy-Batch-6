#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;

    while (t--)
    {

        int sunny=0;
        for(int i=0; i<7; i++){
            int x;
            cin>>x;
            sunny+=x;
        }

        if(sunny>3)
          {
            cout<<"YES"<<endl;
          }
          else{
            cout<<"NO"<<endl;
          }
       
    }
    
    return 0;
}