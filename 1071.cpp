#include<bits/stdc++.h>
using namespace std;
int main()
{
     int x,y,sum=0;
     cin>>x>>y;
    for(int i=min(x,y)+1; i<max(x,y); i++){
        if(i%2 !=0){
            sum=sum+i;
        }
    }
     cout<<sum<<endl;
    return 0;
}