#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll n,k;
   while (cin>>n>>k)
   {
       int a[n+5];
       for (int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       if (n==k)
       {
           cout<<1<<endl;
       }
       else if (k==2)
       {
           cout<<n-1<<endl;
       }
       else
       {
           int a=n-k;
           int b=a/(k-1);
           int p=(b+1);
           if (a%(k-1)==0)
           {
               cout<<p<<endl;
           }
           else
           {
               cout<<p+1<<endl;
           }
       }
   }
    return 0;
}
