#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1){
    int m,n,sum=0;

        cin>>m>>n;
        if(m<=0 || n<=0){
            break;
        }
            for (int i = min(m,n); i<=max(m,n); i++)
            {
                cout<<i<<" ";
                sum +=i;
            }
            cout<<"Sum="<<sum<<endl;
    }
    return 0;
}