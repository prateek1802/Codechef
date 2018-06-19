#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int a[n];
        bool b[m];
        for(int i=1;i<=m;i++)
        {
            b[i]=false;
        }
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            b[a[i]]=true;
        }
        /*for(int i=1;i<=m;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;*/
        int c=0;
        vector<int> chef;
        vector<int> ast;

        for(int i=1;i<=m;i++)
        {
            if(c%2==0&&(!b[i]))
            {
                chef.push_back(i);
                c++;
            }
            else if(c%2!=0&&(!b[i]))
            {
                ast.push_back(i);
                c++;
            }
        }

        if(chef.empty())
        {
            cout<<endl;
        }
        else
        {
            for(int i=0;i<chef.size();i++)
            {
                cout<<chef[i]<<" ";
            }
        }
        cout<<endl;
        if(ast.empty())
        {
            cout<<endl;
        }
        else
        {
            for(int i=0;i<ast.size();i++)
            {
                cout<<ast[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
