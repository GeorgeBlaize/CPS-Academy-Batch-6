#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t;
    cin>>t;



    while (t--)
    {

    int n;
    cin>>n;
        
    int max1=-1,max2=-1;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;

        if(x>max1){
            if(x!=max1){
                max2=max1;
            }

            max1=x;
        }
        else if(x<max1 && x>max2){
            max2=x;
        }
    }
    

      cout<<max1+max2<<endl;
    }
   
    return 0;
}