#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;

    while (t--)
    {
       
        int a1,a2,a3,b1,b2,b3;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;

        int a[3]={a1,a2,a3};
        int b[3]={b1,b2,b3};

        sort(a,a+3);
        sort(b,b+3);

        int alice=a[2]*100+a[1]*10+a[0];
        int bob=b[2]*100+b[1]*10+b[0];

        if(alice>bob){
            cout<<"Alice"<<endl;
        }
        else if(bob>alice){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Tie"<<endl;
        }


    }
    
    return 0;
}