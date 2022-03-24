#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,l=0,r,m;
        string s;
        cin>>n>>k;
        r=k;
        while(l<r)
        {
            m=l+(r-l)/2;
            if((m*(m+1))/2<k)
                l=m+1;
            else
                r=m;
        }
        for(int i=0;i<n;i++)
        {
            if(i==(k-((l*(l-1))/2))-1)
            {
                s+='b';
            }
            else if(i==l)
            {
                s+='b';
            }
            else
            {
                s+='a';
            }
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
}
