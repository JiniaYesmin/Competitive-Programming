#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,n;
    long long int sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            x=i;
            y=(n/x);
            sum+=((x%1000000007)*(y%1000000007));
           // cout<<x<< " "<<y <<endl;
        }
        cout<<sum%1000000007<<endl;
        sum=0;
    }
}
