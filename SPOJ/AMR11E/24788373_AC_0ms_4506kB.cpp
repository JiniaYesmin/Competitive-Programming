#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
int num = 1001;
bool check[1001];
vector <int> v,v1;

void sieve ()
{
    v.push_back(2);

    int i,j;

    check[0] = check[1] = true;

    for (i=4; i<=num; i+=2)
        check[i] = true;

    for (i=3; i*i<=num; i+=2)
        if (check[i] == false)
            for (j=i*i; j<num; j+=2*i)
                check[j] = true;

    for (i=3; i<num; i+=2)
        if (check[i] == false)
            v.push_back(i);
}

void number()
{
    sieve();
    for(int i=25;i<5000;i++)
    {
        int c=0;
        for(int j=0;j<v.size();j++)
        {
            if(i%v[j]==0)
                c++;
            if(c>=3)
            {
                v1.push_back(i);
                break;
            }
        }
    }
}

int main()
{
    number();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<v1[n-1]<<endl;
    }
    return 0;
}
