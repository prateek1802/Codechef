#include<bits/stdc++.h>
using namespace std;
int c=0;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long double x1,x2,x3,y1,y2,y3,d[3];
        cin>>x1>>y1>>x2;
        cin>>y2>>x3>>y3;
        int n=3;
        d[0]=pow(x2-x1,2)+pow(y2-y1,2);
        d[1]=pow(x2-x3,2)+pow(y2-y3,2);
        d[2]=pow(x3-x1,2)+pow(y3-y1,2);

        sort(d,d+n);
        if(d[0]+d[1]==d[2])
            c++;
    }
    cout<<c<<"\n";
    return 0;
}

