#include<iostream>
#include<iomanip>

using namespace std;
int main()

{

    int x;
    cin>>x;

    int lastTwo=x%100;

    cout<<"K"<<setw(2)<<setfill('0')<<lastTwo<<endl;

    
    return 0;
}