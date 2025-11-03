#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    
    int t;
    cin>>t;

    while (t--)
    {
        int friends=3;    
        int candles;

        cin>>candles;

        if(candles%friends==0){
           cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    

    return 0;
}