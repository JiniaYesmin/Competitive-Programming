#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cas=1,n,a[60],ans=0,d;
    set<int>st;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n-1;i++)
        {
            d=(a[i+1]-a[i]);
            if(d%5==0)
            {
                ans+=(d/5);
            }
            else
            {
                ans+=(d/5)+1;
            }
        }
        if(a[0]>2)
        {
            d=a[0]-2;
            if(d%5==0)
            {
                ans+=(d/5);
            }
            else
            {
                ans+=(d/5)+1;
            }
        }
        printf("Case %d: %d\n",cas,ans);
        cas++;
        ans=0;
    }
    return 0;
}
