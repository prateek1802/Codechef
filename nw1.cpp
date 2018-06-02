#include<iostream>
#include<cstring>
#include<math.h>
#include<algorithm>
#include<sstream>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        if(n==28)
        {
            cout<<"4 4 4 4 4 4 4";
        }
        else
        {
            int days[7]={4,4,4,4,4,4,4};
            n=n%7;

            if(n==1)
            {
                if(s=="mon")
                {
                    days[0]++;
                }
                else if(s=="tues")
                {
                    days[1]++;
                }
                else if(s=="wed")
                {
                    days[2]++;
                }
                else if(s=="thurs")
                {
                    days[3]++;
                }
                else if(s=="fri")
                {
                    days[4]++;
                }
                else if(s=="sat")
                {
                    days[5]++;
                }
                else if(s=="sun")
                {
                    days[6]++;
                }
            }

            else if(n==2)
            {
                if(s=="mon")
                {
                    days[0]++;
                    days[1]++;
                }
                else if(s=="tues")
                {
                    days[1]++;
                    days[2]++;
                }
                else if(s=="wed")
                {
                    days[2]++;
                    days[3]++;
                }
                else if(s=="thurs")
                {
                    days[3]++;
                    days[4]++;
                }
                else if(s=="fri")
                {
                    days[4]++;
                    days[5]++;
                }
                else if(s=="sat")
                {
                    days[5]++;
                    days[6]++;
                }
                else if(s=="sun")
                {
                    days[6]++;
                    days[0]++;
                }
            }

            else if(n==3)
            {
                if(s=="mon")
                {
                    days[0]++;
                    days[1]++;
                    days[2]++;
                }
                else if(s=="tues")
                {
                    days[1]++;
                    days[2]++;
                    days[3]++;
                }
                else if(s=="wed")
                {
                    days[2]++;
                    days[3]++;
                    days[4]++;
                }
                else if(s=="thurs")
                {
                    days[3]++;
                    days[4]++;
                    days[5]++;
                }
                else if(s=="fri")
                {
                    days[4]++;
                    days[5]++;
                    days[6]++;
                }
                else if(s=="sat")
                {
                    days[5]++;
                    days[6]++;
                    days[0]++;
                }
                else if(s=="sun")
                {
                    days[6]++;
                    days[0]++;
                    days[1]++;
                }
            }

            for(int i=0;i<7;i++)
            {
                cout<<days[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
