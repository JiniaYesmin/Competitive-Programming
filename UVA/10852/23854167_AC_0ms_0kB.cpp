#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check[10005];
vector<int> v;

void sieve(int num)
{
    v.push_back(2);
    check[0]=check[1]=true;
    int i,j;
    for(i=4;i<=num;i+=2)
        check[i]=true;
    for(i=3;i*i<=num;i+=2)
        if(check[i]==false)
        for(j=i*i;j<num;j+=2*i)
            check[j]=true;
    for(i=3;i<num;i+=2)
        if(check[i]==false)
        v.push_back(i);
}

using namespace std;
int main()
{
    int m;
    cin>>m;
    while(m--)
    {
        int n,a;
        cin>>n;
        sieve(n);
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>(n/2))
            {
                a=v[i];
                break;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}
