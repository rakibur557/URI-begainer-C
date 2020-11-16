#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long int x;
        cin>>x;
        if(x==0){
            cout<<"NULL"<<endl;
        }
        else if (x>0){
                if(x%2==0){
                    cout<<"EVEN POSITIVE"<<endl;
                }
                else
                    cout<<"ODD POSITIVE"<<endl;
            }
        else{
            if(x%2==0){
                    cout<<"EVEN NEGATIVE"<<endl;
                }
                else
                    cout<<"ODD NEGATIVE"<<endl;
        }
    }
}