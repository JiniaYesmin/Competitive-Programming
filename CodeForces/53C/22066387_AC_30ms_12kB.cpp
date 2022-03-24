#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
    }
    else
    {
        for(int i=0;i<n/2;i++)
        {
            cout<<i+1<< " "<<n-i<< " ";
        }
        if(n%2!=0)
        {
            cout<<(n/2)+1<<endl;
        }
    }
}
