#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[2009],s1=0,s2=0,c=0;
    cin>>n;
    m=(2*n);
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        s1+=a[i];
    }
    for(int i=n;i<m;i++)
    {
        s2+=a[i];
    }
    if(s1==s2)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=n;j<m;j++)
            {
                if(a[i]!=a[j])
                {
                    swap(a[i],a[j]);
                    c=1;
                    break;
                }
            }
            if(c==1)
            {
                break;
            }
        }
        if(c==1)
        {
        for(int i=0;i<m-1;i++)
        {
            cout<<a[i]<< " ";
        }
            cout<<a[m-1]<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    else
    {
        for(int i=0;i<m-1;i++)
        {
            cout<<a[i]<< " ";
        }
        cout<<a[m-1]<<endl;
    }
}
