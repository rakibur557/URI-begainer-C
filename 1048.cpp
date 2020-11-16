#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1){
    float salary,ans;
    string percent;
    cin>>salary;

    if(salary >=0 && salary<=400.00){
        ans = salary*15/100;
        percent = "15 %";
    }
    else if(salary >=400.01 && salary<=800.00){
        ans = salary*12/100;
        percent = "12 %";
    }
    else if(salary >=800.01 && salary<=1200.00){
        ans = salary*10/100;
        percent = "10 %";
    }
    else if(salary >=1200.01 && salary<=2000.00){
        ans = salary*7/100;
        percent = "7 %";
    }
    else if(salary>2000.00){
        ans = salary*4/100;
        percent = "4 %";
    }

    cout<<"Novo salario: "<<fixed<<setprecision(2)<<salary+ans<<endl;
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<ans<<endl;
    cout<<"Em percentual: "<<percent<<endl;
    }   
}