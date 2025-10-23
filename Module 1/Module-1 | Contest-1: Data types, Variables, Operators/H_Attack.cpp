#include<iostream>
using namespace std;

int main()
{

    long long a,b;
    cin>>a>>b;

    long long attacks;

    attacks=(a+b-1)/b;

    cout<<attacks<<endl;

    return 0;

}