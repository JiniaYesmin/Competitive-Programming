#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a=0,r,b,d,c=INT_MAX,f;
    cin>>n>>t;
    int x[n+5],y[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n;i++)
    {
        if(x[i]>=t)
        {
            if(c>x[i])
            {
                c = x[i];
                f = i+1;
            }
        }

        else
        {
            if((t-x[i])%y[i] == 0)
                b = (t-x[i])/y[i];
            else
                b = ((t-x[i])/y[i]) + 1;
            b = x[i]+(b*y[i]);
            if(c>b)
            {
                c = b;
                f = i+1;
            }
        }

    }
    cout<<f<<endl;
}
