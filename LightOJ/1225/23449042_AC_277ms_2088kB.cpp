#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=1;
    cin>>t;
    while(t--)
    {
        string s,s1;
        cin>>s;
        s1=s;
        reverse(s1.begin(),s1.end());
        if(s1==s)
        {
            cout<< "Case "<<c++<< ": " << "Yes"<<endl;
        }
        else
        {
            cout<<"Case "<<c++<< ": " << "No"<<endl;
        }
    }
    return 0;
}
