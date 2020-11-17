#include<bits/stdc++.h>
using namespace std;
int main()
{
    float score,count=0,sum=0;
    for(;;){
        cin>>score;
        if(score>=0 && score<=10){
            count++;
            sum=sum+score;
        }
        else
            cout<<"nota invalida"<<endl;
        if(count==2)
            break;
    }
    
    cout<<"media = "<<fixed<<setprecision(2)<<sum/2<<endl;
    return 0;
}