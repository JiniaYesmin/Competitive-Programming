#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m1=15,m2=15,s[35],d[15];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        m1=min(m1,s[i]);
    }
    for(int i=0;i<10;i++)
    {
        cin>>d[i];
        m2=min(m2,d[i]);
    }
    if(m2>m1)
    {
        cout<<m1<<endl;
    }
    else
    {
        cout<<10<<endl;
    }
    return 0;
}