#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;

    string pentagonOrder= "ABCDE";

    int s1=pentagonOrder.find(s[0]);
    int s2=pentagonOrder.find(s[1]);
    int t1=pentagonOrder.find(t[0]);
    int t2=pentagonOrder.find(t[1]);
    

    int d1=abs(s1-s2);
    int d2=abs(t1-t2);

    d1=min(d1,5-d1);
    d2=min(d2,5-d2);

     
    if(d1==d2){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}