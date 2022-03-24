#include<bits/stdc++.h>
using namespace std;
int main()
{
       long long n,k;
       while(cin>>n>>k)
       {
           long long sum=n+(n/k),total=(n/k)+(n%k);
           while(total>=k)
           {
               sum+=(total/k);
               total=(total/k)+(total%k);
           }
           cout<<sum<<endl;
       }
        return 0;
}
