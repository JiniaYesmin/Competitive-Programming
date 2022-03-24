#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,n,a[1009],sum=0,cnt=0;
    double av,div,res;
    scanf("%d",&c);
    while(c--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        av=(sum*1.0)/(n*1.0);
        for(int i=0;i<n;i++)
        {
            if(a[i]>av)
            {
                cnt++;
            }
        }
        div=(cnt*1.0)/(n*1.0);
        res=div*100.0;
        printf("%.3f%\n",res);
        cnt=0;
        sum=0;
    }
}
