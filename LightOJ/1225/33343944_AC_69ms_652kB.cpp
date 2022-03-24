#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s,s1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
       cin>>s;
       s1=s;
       reverse(s.begin(),s.end());
       cout<< "Case "<<i<< ": ";
       if(s==s1)
        cout<< "Yes"<<endl;
       else
        cout<< "No"<<endl;
    }
    return 0;
}
