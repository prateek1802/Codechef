#include<iostream>
using namespace std;

double get(double s)
{
    double hra,da;
    if(s<1500)
    {
        hra=0.1*s;
        da=0.9*s;
        s=s+hra+da;
        return s;
    }

    else if(s>=1500)
    {
        hra=500;
        da=0.98*s;
        s=s+hra+da;
        return s;
    }
}

int main()
{
    double t,salary;
    cin>>t;

    while(t--)
    {
        cin>>salary;
        cout<<get(salary)<<endl;
    }
    return 0;
}
