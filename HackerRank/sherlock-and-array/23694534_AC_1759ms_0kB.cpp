#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       long long n,c=0,a=0,b=0;
       cin>>n;
       vector <int> arr(n);
       vector <long long> ls(n);
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
           a+=arr[i];
           ls[i]=a;
       }
       for(int i=1;i<n-1;i++)
       {
           //cout<<ls[i]<<" "<<rs[i]<<endl;
           if(ls[i]==a-ls[i-1])
           {
               c=1;
               break;
           }
       }
       if(n==2)
       {
           cout<<"NO"<<endl;
           continue;
       }

       if(c || n==1)
       {
           cout<< "YES"<<endl;
       }
       else
        cout<< "NO"<<endl;
   }
   return 0;
}


