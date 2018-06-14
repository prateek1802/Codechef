#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int n,ck=0,s=0,e=0,m=0,em=0,mh=0,h=0;
        scanf("%d",&n);
        vector<string> arr;

        for(int i=0;i<n;++i)
        {
            string s;
            cin>>s;
            arr.push_back(s);
        }

        int x=arr.size();
        for(int i=0;i<x;++i)
        {
            if(arr[i]=="cakewalk")
            {
                ck++;
            }

            else if(arr[i]=="simple")
            {
                s++;
            }

            else if(arr[i]=="easy")
            {
                e++;
            }

            else if(arr[i]=="easy-medium"||arr[i]=="medium")
            {
                em++;
            }

            else if(arr[i]=="hard"||arr[i]=="medium-hard")
            {
                mh++;
            }
        }
        if(ck>0&&s>0&&e>0&&em>0&&mh>0)
        {
            printf("Yes\n");
        }

        else
            printf("No\n");
    }
    return 0;
}
