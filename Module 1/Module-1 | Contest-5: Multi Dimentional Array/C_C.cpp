#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int a,b;
    cin>>a>>b;

    if(b==a+1){
        if(a%3!=0){
            cout<<"Yes"<<endl;
            return 0;
        }
    }

    cout<<"No"<<endl;
    return 0;
}