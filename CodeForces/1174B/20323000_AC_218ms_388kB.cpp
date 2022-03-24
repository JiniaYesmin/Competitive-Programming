#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e=0,o=0;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if(e>0 && o>0)
    {
        sort(a,a+n);
    }
    for(int i=0;i<n-1;i++)
    {
        cout<<a[i]<< " ";
    }
    cout<<a[n-1]<<endl;
}
