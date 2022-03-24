#include<bits/stdc++.h>
using namespace std;
int main()
{
  int k,n,s,p,a,t,r;
  cin>>k>>n>>s>>p;
  if(n%s==0){
    a=(n/s);
  }
else{
  a=(n/s)+1;
 }
 t=(k*a);
 if(t%p==0){
   r=(t/p);
  }
 else{
    r=(t/p)+1;
  }
  cout<<r<<endl;
return 0;
}