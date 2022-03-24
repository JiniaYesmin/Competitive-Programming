#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cas=1,n,c=0;
    vector<int>v1,v2;
    scanf("%d",&t);
    for(int i=1;i<=1000;i++)
    {
        v1.push_back(i);
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        v2.push_back(c);
        c=0;
    }
    for(int i=0;i<1000;i++)
    {
        for(int j=i+1;j<1000;j++)
        {
            if(v2[i]>v2[j])
            {
                swap(v1[i],v1[j]);
                swap(v2[i],v2[j]);
            }
            else
            {
                if((v2[i]==v2[j]) && (v1[i]<v1[j]))
                {
                    swap(v1[i],v1[j]);
                    swap(v2[i],v2[j]);
                }

            }
        }
    }
    while(t--)
    {
        scanf("%d",&n);
        printf("Case %d: %d\n",cas,v1[n-1]);
        cas++;
    }
    return 0;
}
