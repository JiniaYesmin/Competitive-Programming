#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
int main()
{
    int t,cas=1;
    cin>>t;
    while(t--)
    {
        long long a[4];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]+a[1]>a[2] && a[0]+a[2]>a[1] && a[1]+a[2]>a[0])
        {
            if((a[0]==a[1]) && (a[1]==a[2]))
            {
                printf("Case %d: Equilateral\n",cas++);
            }
            else if((a[0]==a[1]) || (a[0]==a[2]) || (a[1]==a[2]))
            {
                printf("Case %d: Isosceles\n",cas++);
            }
            else
            {
                printf("Case %d: Scalene\n",cas++);
            }
        }
        else
        {
            printf("Case %d: Invalid\n",cas++);
        }
    }
    return 0;
}
