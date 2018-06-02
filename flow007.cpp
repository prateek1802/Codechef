#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<iomanip>
using namespace std;

int main()
{
    int t,n,y=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int x=n;
        while(x>0)
        {
            y=10*y+(x%10);
            x=x/10;
        }
        cout<<y<<endl;
        y=0;
    }
	return 0;
}

