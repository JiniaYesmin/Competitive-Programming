#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n,c=0,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a%m!=0)
            {
                b=(a/m)+1;
                c+=(b*m)-a;
            }
        }
        cout<<c<<endl;
        c=0;
    }
}
