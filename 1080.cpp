#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max,temp,carry=1;
    cin>>n;
    max=n;
    for(int i=2; i<=100; i++)
    {
        cin>>n;
        
        if (max<n)
        {
            max=n;
            temp=i;
        }
        carry++;
    }
    if (carry==1)
    {
        cout<<max<<endl<<carry<<endl;
    }
    else
    cout<<max<<endl<<temp<<endl;

    return 0;
}