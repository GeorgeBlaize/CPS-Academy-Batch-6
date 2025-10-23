#include<iostream>
using namespace std;
int main()
{

    int rainyDay,cloudyDay;

    cin>>rainyDay>>cloudyDay;

    int clearDay;

    clearDay=7-rainyDay-cloudyDay;

    cout<<clearDay;



    return 0;
}