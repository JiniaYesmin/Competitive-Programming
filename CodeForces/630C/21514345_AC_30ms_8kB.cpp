#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,b=1,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        b*=2;
        c=c+b;
    }
    cout<<c<<endl;
}
