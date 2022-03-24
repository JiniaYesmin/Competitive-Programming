#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a=0,b=0,cnt=1;
    vector<int>v1,v2;
    string s[109];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    sort(v1.begin(),v1.end());
    for(int i=0;i<m;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<m;i++)
    {
        if(s[i]=="-1")
        {
            cnt=0;
        }
        else
        {
            for(int j=0;j<m;j++)
            {
                if(i!=j && s[i]!="-1"&& s[i]==s[j])
                {
                    cnt++;
                    s[j]="-1";
                }
            }
        }

        v2.push_back(cnt);
        cnt=1;
    }
    sort(v2.rbegin(),v2.rend());
    for(int i=0;i<v2.size();i++)
    {
        a+=(v1[i]*v2[i]);
    }
    sort(v1.rbegin(),v1.rend());
    for(int i=0;i<v2.size();i++)
    {
        b+=(v1[i]*v2[i]);
    }
//      for(int i=0;i<n;i++)
//    {
//        cout<<v1[i]<< " ";
//    }
//    cout<<endl;
//    for(int i=0;i<v2.size();i++)
//    {
//        cout<<v2[i]<<endl;
//    }
    cout<<a<< " "<<b<<endl;
    return 0;
}
