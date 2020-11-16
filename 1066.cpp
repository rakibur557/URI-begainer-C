#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,even=0,odd=0,positive=0,negative=0;
    for (int i = 0; i < 5; i++)
    {   
        cin>>n;

        if (n>0)
        {
            positive++;
            if(n==0 || n%2 ==0){
                even++;
            }
            else
                odd++;
        }
        else
        {
            negative++;
            if(n==0){
                negative = negative-1;
            }
            if(n%2 ==0){
                even++;
            }
            else
                odd++;
        }
    }
    cout<<even<<" valor(es) par(es)"<<endl;
    cout<<odd<<" valor(es) impar(es)"<<endl;
    cout<<positive<<" valor(es) positivo(s)"<<endl;
    cout<<negative<<" valor(es) negativo(s)"<<endl;
    
    return 0;
}
