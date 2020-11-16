#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,c,sum=0;
    for(int i=0; i<6; i++){
        cin>>n;
       if(n>=0){
           c++;
           sum = sum + n;

       }
    }
    cout<<c<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<sum/c<<endl;
}