#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,res=0,ans=0;
        cin>>n;
        res=(((((n*567)/9)+7492)*235)/47)-498;
        res/=10;
        ans=abs(res%10);
        cout<<ans<<endl;
    }
    return 0;
}
