#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s1=0,s2=0,c=0,a[100009];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s1+=a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        s2+=a[i];
        if(2*s2==s1)
        {
            c++;
        }
    }
    cout<<c<<endl;
}


