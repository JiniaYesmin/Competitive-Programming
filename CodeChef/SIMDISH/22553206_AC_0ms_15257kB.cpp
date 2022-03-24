#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    string s;
    cin>>t;
    while(t--)
    {
        int m=4,cnt=0;
        vector<string>v,v1;
        while(m--)
        {
            cin>>s;
            v.push_back(s);
        }
        m=4;
        while(m--)
        {
            cin>>s;
            v1.push_back(s);
        }
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v1.size();j++)
            {
                if(v[i]==v1[j])
                {
                    cnt++;
                }
            }
        }
        if(cnt>=2)
        {
            cout<< "similar"<<endl;
        }
        else
        {
            cout<< "dissimilar"<<endl;
        }
    }
    return 0;
}
