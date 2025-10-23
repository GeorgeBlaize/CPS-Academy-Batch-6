#include<bits/stdc++.h>
using namespace std;

int main()
{

    int num1,num2,num3;
    cin>>num1>>num2>>num3;

    if(num1<num2 && num2<num3){
        cout<<"Yes"<<endl;
    }

    else{
        cout<<"No"<<endl;
    }
    
    return 0;
}