#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,value;
    cin>>x;

        if(x % 2 == 0){
            x=x+1;
        }
        for(int i=0; i<6; i++){
            cout<<x<<endl;
            x=x+2;
        }
}