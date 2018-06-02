#include<iostream>
#include<cstring>
#include<math.h>
#include<iomanip>
#include<algorithm>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        long double a,b,h,s;
        int flag=1;
        cin>>h>>s;
        double h4=pow(h,4);
        double h2=pow(h,2);
        double disc=(h*h*h*h-(16*s*s));
        double d=sqrt(disc);
        double disc_out_1=(h*h+d);
        double disc_out_2=(h*h-d);
        if(disc<0||disc_out_1<0||disc_out_2<0)
        {
            flag=0;
        }

        else
        {
            a=min(sqrt(disc_out_1)/sqrt(2),sqrt(disc_out_2)/sqrt(2));
            b=max(sqrt(disc_out_2)/sqrt(2),sqrt(disc_out_1)/sqrt(2));

        }

        if(flag==0)
            cout<<"-1"<<endl;
        else
            cout<<setprecision(6)<<fixed<<a<<" "<<setprecision(6)<<fixed<<b<<" "<<setprecision(6)<<fixed<<h<<endl;
    }
    return 0;
}
