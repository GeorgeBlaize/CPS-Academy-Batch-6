#include<bits/stdc++.h>
using namespace std;
int main()
{
    

    long long n;
    cin>>n;

    if(n<1000){
        cout<<n;
    }

    else if(n<10000){
        cout<<n/10*10;
    }

    else if(n<100000){
        cout<<n/100*100;
    }

    else if(n<1000000){
        cout<<n/1000*1000;
    }
    else if(n<10000000){
        cout<<n/10000*10000;
    }
    else if(n<100000000){
        cout<<n/100000*100000;
    }
    else if(n<1000000000){
        cout<<n/1000000*1000000;
    }
    return 0;
}