#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1){
    double score,count=0,sum=0,flag;
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
        label:
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
        cin>>flag;
        if(flag==1){
            continue;
        }
        else if(flag==2)
            break;
        else
            goto label;
    }
    return 0;
}