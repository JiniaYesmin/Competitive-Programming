#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,e,D,E,ans=INT_MAX;
    cin>>n>>d>>e;
    d=d*1;
    e=e*5;
    D=max(d,e);
    E=min(d,e);
    ans=min(ans,(n-(E*(n/E))));
    while(n-D>=0)
    {
        n-=D;
        ans=min(ans,(n-(E*(n/E))));
    }
    cout<<ans<<endl;
    return 0;
}
