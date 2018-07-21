#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.length();
        set<char> m(s.begin(),s.end());
        cout<<m.size()<<endl;
    }
    return 0;
}
