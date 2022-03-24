#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    vector<pair<int,int> > v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((v[i].first+v[i].second==v[j].first) && (v[j].first+v[j].second==v[i].first))
            {
                cout<< "YES"<<endl;
                return 0;
            }
        }
    }
    cout<< "NO"<<endl;
}
