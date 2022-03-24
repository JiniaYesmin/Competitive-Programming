#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            s+=i;
            //cout<<s<<endl;
        }
    }
    else
    {
        for(int i=1;i>=n;i--)
        {
           //cout<<i<<endl;
            s+=i;
           // cout<<s<<endl;
        }
    }
    cout<<s<<endl;
}
