#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    vector<double> v;
    while(t--)
    {
        double x1,x2,x3;
        double y1,y2,y3;

        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        double a1=fabs(x2-x1);
        double a2=fabs(x3-x2);
        double a3=fabs(x3-x1);
        double b1=fabs(y2-y1);
        double b2=fabs(y3-y2);
        double b3=fabs(y3-y1);
        double l1 = sqrt((a1*a1)+(b1*b1));
        double l2 = sqrt((a2*a2)+(b2*b2));
        double l3 = sqrt((a3*a3)+(b3*b3));
        double s=(l1+l2+l3)/2;

        double area = sqrt(s*(s-l1)*(s-l2)*(s-l3));
        v.push_back(area);
    }

    int minIndex=-1,maxIndex=-1;
    double minn=1000000,maxx=-10000000;

    int x=v.size();

    for(int i=0;i<x;i++)
    {
        if(v[i]>=maxx)
        {
            maxx=v[i];
            maxIndex=i+1;
        }

        if(v[i]<=minn)
        {
            minn=v[i];
            minIndex=i+1;
        }
        //cout<<v[i]<<" ";
    }

    cout<<minIndex<<" "<<maxIndex<<endl;
    return 0;
}
