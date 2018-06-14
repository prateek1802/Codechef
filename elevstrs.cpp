#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        double n,v1,v2;
        cin>>n>>v1>>v2;

        double t1 = (sqrt(2)*n)/v1;
        double t2 = (n*2)/v2;
        //cout<<t1<<" "<<t2<<endl;
        if(t1<t2)
        {
            cout<<"Stairs\n";
        }
        else
        {
            cout<<"Elevator\n";
        }
    }
    return 0;
}
