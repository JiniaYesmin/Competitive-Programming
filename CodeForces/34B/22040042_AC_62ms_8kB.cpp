#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c=0,s=0;
    cin>>n>>m;
    int a[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]<=0 && c<m)
        {
            s+=a[i];
            c++;
        }
    }
    s=(s*-1);
    cout<<s<<endl;
    s=0,c=0;
}
