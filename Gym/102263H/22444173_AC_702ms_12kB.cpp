#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,a=0;
    cin>>n>>k;
    while(n>0)
    {
        a+=5;
        n-=k;
    }
    if(a<10) cout<<10<<endl;
    else cout<<a<<endl;
    return 0;
}
