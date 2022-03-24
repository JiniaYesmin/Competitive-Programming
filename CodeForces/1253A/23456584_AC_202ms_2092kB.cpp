#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d,x,ne=0,po=0,c=0,z=0;
        vector<int>v,v1,v2;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            d=x-v[i];
            v1.push_back(d);
        }
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]<0)
            {
                ne++;
            }
            if(v1[i]>0)
            {
                po++;
            }
        }
        if(ne==0 && po==0)
        {
            cout<< "YES"<<endl;
        }
        else
        {
            if(ne>0)
            {
                cout<< "NO"<<endl;
            }
            else
            {
                if(po>0)
                {
                    for(int i=0;i<v1.size();i++)
                    {
                        if(v1[i]>0)
                        {
                            c++;
                        }
                        else
                        {
                            if(c>0)
                                break;
                        }
                    }
                    if(c!=po)
                        cout<< "NO"<<endl;
                    else
                    {
                        for(int i=0;i<v1.size();i++)
                        {
                            if(v1[i]>0)
                                v2.push_back(v1[i]);
                        }
                        for(int i=1;i<v2.size();i++)
                        {
                            if(v2[i]!=v2[0])
                            {
                                z=1;
                                break;
                            }
                        }
                        if(z>0)
                        {
                            cout<< "NO"<<endl;
                        }
                        else
                        {
                            cout<< "YES"<<endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
