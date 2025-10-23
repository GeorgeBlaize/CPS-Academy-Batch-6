#include<iostream>
using namespace std;

int main()
{

    int num;
    cin>>num;

    int a = num/100;

    int b = (num/10)%10;

    int c = num%10;

    int abc=num;

    int bca=b*100+c*10+a;

    int cab=c*100+a*10+b;

    int result=abc+bca+cab;

    cout<<result<<endl;

    return 0;
}