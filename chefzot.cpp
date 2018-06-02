#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,maxLength=1,currentLength=0,x=0;
    cin>>n;
    long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
            x++;
    }

    if(x==n)
        cout<<"0\n";
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                currentLength++;
            }

            else
            {
                currentLength=0;
            }

            if(currentLength>maxLength)
            {
                maxLength=currentLength;
            }
        }
        cout<<maxLength<<"\n";
    }

    return 0;
}
