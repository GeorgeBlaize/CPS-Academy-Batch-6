#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int num1,num2;

    cin>>num1>>num2;

    int pair=num1+num2+(num1*num2);

    if(pair==111){
        cout<<"Yes"<<endl;
    }

    else{
        cout<<"No"<<endl;
    }

    return 0;
}