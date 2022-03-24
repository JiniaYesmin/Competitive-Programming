#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    vector<int>v,v1,v2;
    map<int,int>mp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        mp[a]++;
        v.push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        {
            v1.push_back(i);
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(mp[i]==0)
        {
            v2.push_back(i);
        }
    }
    int l=v1.size();
    for(int i=0;i<l;i++)
    {
//        cout<<v1[i]<< " "<<v2[l-i-1]<<endl;
        v[v1[i]]=v2[l-i-1];
//        cout<<v[v1[i]]<<endl;
        if(v1[i]==v2[l-i-1]-1)
        {
            if(i==0)
            {
                swap(v[v1[l-1]],v[v1[0]]);
                swap(v1[l-1],v1[0]);

            }
            else
            {
                swap(v[v1[i]],v[v1[i-1]]);
                swap(v1[i],v1[i-1]);
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<v[n-1]<<endl;
    return 0;
}