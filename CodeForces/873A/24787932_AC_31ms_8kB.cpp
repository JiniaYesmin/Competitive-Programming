#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,s=0,s1=0,m,d;
    cin>>n>>k>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        s+=v[i];
    }
    m=k*x;
    for(int i=0;i<(n-k);i++)
    {
        s1+=v[i];
    }
    d=s-s1;
    if(m>d) cout<<s<<endl;
    else cout<<s1+m<<endl;
    return 0;
}
