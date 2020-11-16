#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, alco=0,gas=0,dis=0;
    while (1)
    {
        cin>>n;

        if (n==4)
        {
            break;
        }
        else if (n==1)
        {
            alco++;
        }
        else if (n==2)
        {
            gas++;
        }
        else if(n==3)
        {
            dis++;
        }
        
        else
            continue;
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<alco<<endl;
    cout<<"Gasolina: "<<gas<<endl;
    cout<<"Diesel: "<<dis<<endl;
    
    return 0;
}