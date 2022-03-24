#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;

    while(cin>>n)
    {
        int d,m,x;
        vector<int>v,v1,v2;
        vector<pair<int,int> >p;
        map<int,int>mp,mm;
       for(int i=0;i<n;i++)
         {
             cin>>x;
             mp[x]++;
             v.push_back(x);
         }
         cin>>m;
         sort(v.begin(),v.end());


         for(int i=0;i<v.size();i++)
         {
             if(v[i]<m)
             {
                  if(mp[m-v[i]]!=0)
                 {
                     if(mm[v[i]]==0 && mm[m-v[i]]==0)
                        p.push_back(make_pair(v[i],(m-v[i])));
                     mm[v[i]]++;
                     mm[m-v[i]]++;
                 }
             }
         }
         for(int i=0;i<p.size();i++)
         {
             int y=abs(p[i].first-p[i].second);
             v1.push_back(y);
             v2.push_back(y);
         }
         sort(v2.begin(),v2.end());

         for(int i=0;i<v1.size();i++)
         {
             if(v1[i]==v2[0])
             {
                 d=i;
                 break;
             }
         }
         int ans1=p[d].first;
         int ans2=p[d].second;
         cout<<"Peter should buy books whose prices are "<<min(ans1,ans2)<< " and "<< max(ans1,ans2) <<"." <<endl<<endl;
    }

    return 0;
}
