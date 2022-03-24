#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,r,c,s=0;
    cin>>n>>m>>k;
    map<int,int> mp,mp1;
    map<int,int>:: iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>r>>c;
        mp1[r]++;
        if(mp[r]>c|| mp1[r]==1)
        {
            mp[r]=c;
        }
    }
    for(it=mp.begin();it!=mp.end();it++)
    {
        s+=it->second;
    }
    s=min(s,k);
    cout<<s<<endl;
}
