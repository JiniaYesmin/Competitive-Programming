#include<bits/stdc++.h>
 using namespace std; 
int main() 
    { long long int n,k,a,r; 
    cin>>n>>k;
     a=ceil(n/2.0); 
if(a>=k){ r=(k*2)-1; 
} 
else{
 r=(k*2)-(a*2); 
}
 cout<<r<<endl; 
return 0; 
}