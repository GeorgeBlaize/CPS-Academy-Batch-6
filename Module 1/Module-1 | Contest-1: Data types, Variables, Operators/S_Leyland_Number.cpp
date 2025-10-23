#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    int a,b;

    cin>>a>>b;

    int result;

    result=pow(a,b)+pow(b,a);

    cout<<result<<endl;

    return 0;
}