#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,cnt=0;
    scanf("%d %d", &n, &k);
    vector <int> v;

    for(i=2; i<=n; i++)
    {
        while(n%i==0)
        {
            if(v.size()==k-1)
                break;
            n = n/i;
            v.push_back(i);
            if(v.size()==k-1)
                break;
        }
        if(v.size()==k-1)
                break;
    }


    if(n==1 || n==0)
    {
        cout<<"-1"<<endl;
        return 0;
    }

    for(i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<n<<endl;




    return 0;
}







