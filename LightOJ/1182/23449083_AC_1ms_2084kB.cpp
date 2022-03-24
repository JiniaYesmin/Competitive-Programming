#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,cnt=0,c=1,a;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        while(n>0)
        {
            a=n%2;
            if(n%2==1)
            {
                cnt++;
            }
            n=n/2;
        }
        if(cnt%2==0)
            printf("Case %d: even\n",c);
        else
           printf("Case %d: odd\n",c);
        c++;
        cnt=0;
    }
}
 