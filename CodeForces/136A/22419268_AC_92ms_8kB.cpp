#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[109],b[109],i;
    cin>>n;
    for(i=1;i<=n;i++){
      cin>>a[i];
      b[a[i]]=i;
    }
    for(i=1;i<=n;i++){
      cout<<b[i]<<" ";
    }
   return 0;
}