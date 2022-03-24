#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,s=0,c=0;
        string S;
        cin>>n>>S;
        for(int i=0;i<=S.size();i++)
        {
            if(S[i]=='1') c++;
        }
        for(int i=1;i<=c;i++)
        {
            s+=i;
        }
        cout<<s<<endl;
    }
}
