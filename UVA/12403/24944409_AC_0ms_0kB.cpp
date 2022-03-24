#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,k;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s=="donate")
        {
            cin>>k;
            sum+=k;
        }
        else
        {
            cout<<sum<<endl;
        }
    }
    return 0;
}
