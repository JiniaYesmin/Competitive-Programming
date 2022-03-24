#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,g[105],b[105],cnt=0,i,a,j;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>g[i];
    }
    cin>>m;
    for(j=0; j<m; j++)
    {
        cin>>b[j];
    }
    sort(g,g+n);
    sort(b,b+m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            a = abs(g[i]-b[j]);
            if(a<=1 && b[j]!=-9)
            {

                cnt++;
                b[j]=-9;
                break;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
