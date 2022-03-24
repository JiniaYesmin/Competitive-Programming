#include<bits/stdc++.h>
using namespace std;
long long int a, b, c, d, e, f,ar[100009];
int fn( int n ) {
    for(int i=0;i<=n;i++)
    {
        if( i == 0 )
        {
            ar[i]= a;
            continue;
        }
        if( i == 1 )
           {
            ar[i]= b;
            continue;
        }
        if( i == 2 )
         {
            ar[i]= c;
            continue;
        }
        if( i == 3 )
          {
            ar[i]= d;
            continue;
        }
        if( i == 4 )
          {
            ar[i]= e;
            continue;
        }
        if( i == 5 )
          {
            ar[i]= f;
            continue;
        }
        ar[i]=ar[i-1] + ar[i-2] + ar[i-3] + ar[i-4] + ar[i-5] + ar[i-6];
        ar[i]%=10000007;
    }
   return ar[n];
}
int main() {
    int n, caseno = 0, cases;
   cin>>cases;
    while( cases-- ) {
        cin>>a>>b>>c>>d>>e>>f>>n;
        cout<<"Case "<<++caseno<< ": "<<fn(n)%10000007<<endl;
    }
    return 0;
}
 