#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    unsigned int t;
    cin>>t;
    while(t--)
    {
        char a[1000],b[1000];
        cin>>a>>b;
        int i=0,j=0,c=0;
        while(i<strlen(a)&&j<strlen(b))
        {
            if((a[i]!=b[j])&&(a[i]!='?'&&b[j]!='?'))
            {
                c++;
                i++;
                j++;
                break;
            }
            else
            {
                i++;
                j++;
            }
        }

        if(c==1)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}

