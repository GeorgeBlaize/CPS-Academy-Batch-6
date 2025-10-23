#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,h;
    cin>>w>>h;

    int chefWeight=60;
    int chefHeight=130;

    if(chefWeight<=w && chefHeight>=h){
        cout<<"YES"<<endl;
    }

    else{
        cout<<"NO"<<endl;
    }

    return 0;
}