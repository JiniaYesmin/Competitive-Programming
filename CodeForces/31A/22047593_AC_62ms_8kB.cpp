#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,a[109];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(k!=i && i!=j && j!=k && a[i]==a[j]+a[k])
                {
                    cout<<i+1<< " "<<j+1<< " "<<k+1<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<-1<<endl;
}

