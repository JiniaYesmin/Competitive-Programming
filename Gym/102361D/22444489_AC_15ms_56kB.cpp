#include <bits/stdc++.h>
using namespace std;

vector<int>v;

void SieveOfEratosthenes()
{
    bool prime[100+1];
    v.push_back(3);
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=100; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=100; i += p)
                prime[i] = false;
        }
    }

    for (int p=7; p<=100; p++)
       if (prime[p])
          v.push_back(p);
}

int main()
{
    int t,n,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        SieveOfEratosthenes();
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==n||n%v[i]==0)
            {
                c=1;
                cout<< "Yes"<<endl;
                break;
            }
        }
        if(c==0)
        {
            cout<< "No"<<endl;
        }
        c=0;
    }

	return 0;
}
