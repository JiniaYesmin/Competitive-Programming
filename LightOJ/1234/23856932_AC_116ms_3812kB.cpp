#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    double a=0;
    vector<double>v;
    for(int i=1;i<=100000;i++)
    {
        a+=(1.0/(double)i);
        v.push_back(a);
    }
    int t,c=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double m=abs(18.4206807490-18.9978964139);
        if(n>100000)
            printf("Case %d: %.10f\n",c++,log(n+.5)+m);
        else
            printf("Case %d: %.10f\n",c++,v[n-1]);
    }
    return 0;
}
