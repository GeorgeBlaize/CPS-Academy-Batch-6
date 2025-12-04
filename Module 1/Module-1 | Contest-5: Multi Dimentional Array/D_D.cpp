#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;

    vector<string>arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> freeDay(d);

    for(int j=0; j<d; j++){
        bool got=false;

        for(int i=0; i<n; i++){
            if(arr[i][j]=='x'){
                got=true;
                break;
            }
        }

        freeDay[j]=(got? 0: 1);
    }

    int ans=0;
    
    for(int j=0; j<d; j++){
        if(freeDay[j]==1){
            int len=1;
            for(int j2=j+1; j2<d; j2++){
                if(freeDay[j2]==1)
                   len++;
                else
                   break;
            }

            ans=max(ans,len);
        }
    }

    cout<<ans<<endl;

    return 0;
}