#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int x,n;
    cin>>x>>n;

    int arr[105][105];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++ ){
            cin>>arr[i][j];
        }
    }

    for(int j=0; j<n; j++){
        int flag=0;
        for(int i=0; i<n; i++){
            if(arr[i][j]==x){
             flag=1;
            }
        }

        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}