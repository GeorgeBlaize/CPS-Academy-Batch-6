#include<iostream>
#include<iomanip>
using namespace std;
int main()

{

    long long a,b;

    cin>>a>>b;

    long long d;
    
    d=a/b;

    long long r;
    r=a%b;
    double f;
    f=(double)a/b;

    cout<<d<<" "<<r<<" "<<fixed<<setprecision(5)<<f<<endl;

    
    return 0;
}