#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0,a;
        cin>>n;
        int m=n;
        while(m--)
        {
            cin>>a;
            if(a%2==1) cnt++;
        }
        if(cnt>0) cout<<n<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
