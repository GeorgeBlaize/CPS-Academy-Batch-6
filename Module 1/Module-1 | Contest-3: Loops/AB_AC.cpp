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

        int winner =-1,bestQuality=-1;

        for(int i=1; i<=n; i++){
            int a,b;
            cin>>a>>b;
            if(a<=10 && b > bestQuality){
                bestQuality=b;
                winner=i;
            }
        }
        cout<<winner<<endl;
    }
    
    return 0;
}