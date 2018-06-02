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
        string a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }

        sort(a,a+n);
        sort(b,b+n);

        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(a[i]==b[j])
                {
                    flag++;
                }
            }
        }

        if(flag>=n/2)
            cout<<"similar"<<endl;
        else
            cout<<"dissimilar"<<endl;
    }
    return 0;
}
