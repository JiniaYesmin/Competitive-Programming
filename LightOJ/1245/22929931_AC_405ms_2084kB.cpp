#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,c=1;
    cin>>t;
    while(t--)
    {
        long long sum=0;
        cin>>n;
        int r=sqrt(n);
        for(int i=1;i<=r;i++)
        {
            sum+=(n/i);
        }
        sum=2*sum-(r*r);
        cout<< "Case " <<c<< ": " <<sum<<endl;
        c++;
    }
    return 0;
}
