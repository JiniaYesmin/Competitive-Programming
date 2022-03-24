#include<bits/stdc++.h>
using namespace std;
int ar[30];
int main()
{
    int n,S=0,s1=0,s2=0,a,b=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        ar[s[0]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(ar[i]>2)
        {
            if(ar[i]%2==0)
            {
                a=ar[i]/2;
                S=(a*(a-1))/2;
                b+=S*2;
            }
            else
            {
                a=ar[i]/2;
                s1=(a*(a-1))/2;
                s2=((a+1)*(a))/2;
                b+=s1+s2;
            }
        }
    }
    cout<<b<<endl;
}
