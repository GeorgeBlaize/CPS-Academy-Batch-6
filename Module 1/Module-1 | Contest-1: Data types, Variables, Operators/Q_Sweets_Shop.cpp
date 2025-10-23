#include<iostream>
using namespace std;

int main()
{

    int x,n;

    cin>>x>>n;

    int ladduCost=10;
    
    int jalebiCost=20;

    int remaining=x-(n*ladduCost);

    int jalebis=remaining/jalebiCost;

    cout<<jalebis<<endl;

    return 0;
}