#include<bits/stdc++.h>
using namespace std;

int getFactor(int n)
{
    vector<int> v;
    while(n%2==0)
    {
        v.push_back(2);
        n/=2;
    }
    for(int i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
            v.push_back(i);
            n/=i;
        }
    }
    if(n>2)
        v.push_back(n);
    /*vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;*/
    return set<int>(v.begin(),v.end()).size();
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int m,n;
       cin>>m>>n;

       unsigned long int sum=0;
       for(int i=m;i<n;i++)
       {
            sum+=getFactor(i);
       }
       cout<<sum<<endl;
    }
    return 0;
}
