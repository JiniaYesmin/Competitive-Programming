#include<bits/stdc++.h>
using namespace std;
int a[30],b[30];
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        int c=0;
        string s,s1;
        cin>>s>>s1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
                a[s[i]-'a']++;
            else
               a[s[i]-'A']++;
        }
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]>='a' && s1[i]<='z')
                b[s1[i]-'a']++;
            else
               b[s1[i]-'A']++;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]>0 && b[i]>0)
            {
                c=1;
                break;
            }
        }
        if(c)
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }
    }
    return 0;
}
