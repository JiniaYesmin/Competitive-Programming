#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=1;
    cin>>t;
    while(t--)
    {
        int n,k,cnt=1;
        cin>>n>>k;
        string s,a;
        vector<string>v;
        for(int i=0;i<n;i++)
        {
            s+=('A'+i);
        }
        a=s;
        v.push_back(a);
        bool val=next_permutation(s.begin(),s.end());
        while(val)
        {
            a=s;
            v.push_back(a);
            val=next_permutation(s.begin(),s.end());
            cnt++;
            if(cnt>k)
                break;
                else
                    continue;
        }
        //sort(v.begin(),v.end());
        if(v.size()>=k)
        {
            cout<< "Case "<<c++<< ":"<<endl;
            for(int i=0;i<k;i++)
            {
                cout<<v[i]<<endl;
            }
        }
        else
        {
            cout<< "Case "<<c++<< ":"<<endl;
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i]<<endl;
            }
        }
    }
    return 0;
}
