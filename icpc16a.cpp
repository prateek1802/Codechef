#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<iomanip>
using namespace std;

int main()
{
        int t,x1,x2,y1,y2;
        cin>>t;
        while(t--)
        {
            cin>>x1>>y1>>x2>>y2;
            if(y2>y1&&x1==x2)
                cout<<"up"<<endl;
            else if(y2<y1&&x1==x2)
                cout<<"down"<<endl;
            else if(y2==y1&&x1<x2)
                cout<<"right"<<endl;
            else if(y2==y1&&x1>x2)
                cout<<"left"<<endl;
            else
                cout<<"sad"<<endl;
        }
    return 0;
}

