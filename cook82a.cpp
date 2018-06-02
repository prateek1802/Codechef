#include<iostream>
#include<algorithm>
#include<math.h>
#include<cstring>
using namespace std;

int main()
{
    unsigned int t;
    cin>>t;
    while(t--)
    {
        unsigned int n=4,flag=0;
        string a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            cin>>b[i];
        }

        int barca,madrid,mal,eib;
        for(int i=0;i<n;++i)
        {
            if(a[i]=="Barcelona")
            {
                barca=i;
            }
            if(a[i]=="RealMadrid")
            {
                madrid=i;
            }
            if(a[i]=="Malaga")
            {
                mal=i;
            }
            if(a[i]=="Eibar")
            {
                eib=i;
            }
        }

        if((b[madrid]<b[mal])&&(b[barca]>b[eib]))
            cout<<"Barcelona"<<endl;
        else
            cout<<"RealMadrid"<<endl;
    }
    return 0;
}
