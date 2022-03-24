#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int i,a,b;
    while (cin>>s1>>s2)
    {
        int a=0;
         map<char ,int>m;
         map<char ,int> :: iterator it;
         vector<int>v;
         for (int i=0;i<s1.length();i++)
         {

             m[s1[i]]++;
         }
          for (int i=0;i<s2.length();i++)
         {
             char c=s2[i];
             m[c]++;
         }
         for (it=m.begin();it!=m.end();it++)
         {
            if (it->second%2!=0)
            {
                a++;
            }
         }
         if (a>1)
         {
             cout<<"NO"<<endl;
         }
         else
         {
              cout<<"YES"<<endl;
         }
    }

   return 0;
}
