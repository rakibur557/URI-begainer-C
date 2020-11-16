#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    float sum;
    cin>>t;
    while(t--)
    {
        float a,b,c;
        cin>>a>>b>>c;
        //a=a*2; b=b*3; c=c*5;
        sum = (a*2+b*3+c*5)/10;
        
        cout<<fixed<<setprecision(1)<<sum<<endl; 
    }
    
}