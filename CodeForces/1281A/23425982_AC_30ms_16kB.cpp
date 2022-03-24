#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int l=s.size();
        if(s[l-2]=='p'&& s[l-1]=='o')
        {
            cout<< "FILIPINO"<<endl;
        }
        else if(s[l-4]=='d'&& s[l-3]=='e'&& s[l-2]=='s'&&s[l-1]=='u')
        {
            cout<< "JAPANESE"<<endl;
        }
        else if(s[l-4]=='m'&& s[l-3]=='a'&& s[l-2]=='s'&&s[l-1]=='u')
        {
            cout<< "JAPANESE"<<endl;
        }
        else if(s[l-5]=='m'&&s[l-4]=='n'&& s[l-3]=='i'&& s[l-2]=='d'&&s[l-1]=='a')
        {
            cout<< "KOREAN"<<endl;
        }
    }
    return 0;
}