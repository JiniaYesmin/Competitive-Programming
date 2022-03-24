#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a[4];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]+a[1]>a[2] && a[0]+a[2]>a[1] && a[1]+a[2]>a[0])
        {
            printf("OK\n");
        }
        else
        {
            printf("Wrong!!\n");
        }
    }
    return 0;
}
