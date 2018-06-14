#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.length();
        int a[100000]={0};
        for(int i=0;i<l;i++)
        {
            if(s[i]=='f'||s[i]=='r'||s[i]=='i'||s[i]=='e'||s[i]=='z'||s[i]=='a')
            {
                a[i]=1;
            }
            else
                a[i]=-1;
        }

        for(int i=0;i<l;i++)
        {
            int c=1;
            while(i<=l)
            {
                if(a[i]==a[i+1])
                {
                    c++;
                    i++;
                }
                else
                {
                    printf("%d",c);
                    break;
                }
            }
        }
        /*for(int i=0;i<l;i++)
        {
            cout<<a[i]<<" ";
        }*/
        printf("\n");
    }
    return 0;
}
