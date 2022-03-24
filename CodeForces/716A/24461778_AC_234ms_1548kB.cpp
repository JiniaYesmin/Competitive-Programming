#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long n,c,cnt=1,x;
     vector<long long>v;
     cin>>n>>c;
     for(int i=0;i<n;i++)
     {
         cin>>x;
         v.push_back(x);
     }
    for(int i=0;i<n-1;i++)
    {
        if(v[i+1]-v[i]<=c)
            cnt++;
        else
            cnt=1;
    }
    cout<<cnt<<endl;
}
