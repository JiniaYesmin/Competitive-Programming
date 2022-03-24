#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y;
    long long int s=0,a;
    vector<pair<int,int> > v;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(y,x));
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<m;i++)
    {
        if(n>0)
        {
             if(n>v[i].second)
            {
                s+=(v[i].first*v[i].second);
                n-=v[i].second;
            }
            else
            {
                s+=(v[i].first*n);
                n=0;
            }
        }
        else
        {
            break;
        }
    }
    cout<<s<<endl;
    s=0;
}

