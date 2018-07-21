#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int m,n;
        cin>>m>>n;
        char a[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }

        char b[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i+j)%2==0)
                {
                    b[i][j]='G';
                }
                else
                    b[i][j]='R';
            }
        }

        char c[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i+j)%2!=0)
                {
                    c[i][j]='G';
                }
                else
                    c[i][j]='R';
            }
        }

        int c1=0,c2=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(b[i][j]!=a[i][j])
                {
                    if(a[i][j]=='R')
                    {
                        c1+=5;
                    }
                    else if(a[i][j]=='G')
                    {
                        c1+=3;
                    }
                }
            }
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(c[i][j]!=a[i][j])
                {
                    if(a[i][j]=='R')
                    {
                        c2+=5;
                    }
                    else if(a[i][j]=='G')
                    {
                        c2+=3;
                    }
                }
            }
        }

        cout<<min(c1,c2)<<endl;
    }

    return 0;
}
