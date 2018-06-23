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
        int len=s.length();

        int oddC=0,evenC=0;

        char a1[len+1];
        char a2[len+1];
        for(int i=0;i<len;i++)
        {
            if(i%2==0)
            {
                a1[i]='+';
                a2[i]='-';
            }
            else
            {
                a1[i]='-';
                a2[i]='+';
            }
        }

        for(int i=0;i<len;i++)
        {
            if(s[i]!=a1[i])
            {
                oddC++;
            }
            if(s[i]!=a2[i])
            {
                evenC++;
            }
        }

        printf("%d\n",min(oddC,evenC));
    }
    return 0;
}
