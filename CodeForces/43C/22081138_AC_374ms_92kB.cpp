#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,x,y,cnt=0;

    cin>>n;
    vector <long long> v(n);

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(i=0; i<n; i++)
    {
        if(v[i]==-1 && i<n-1)
            i++;
        for(j=0; j<n; j++)
        {
            if(i!=j && v[i] != -1 && v[j] != -1)
            {
                x = ((v[i]*pow(10,(floor(log10(v[j]+1))))) + v[j]);
                y = ((v[j]*pow(10,(floor(log10(v[j]+1))))) + v[i]);
                if(x%3 == 0 || y%3 == 0)
                {
                    //cout<<v[i]<<" "<<v[j]<<endl;
                    v[j] = -1;
                    v[i] = -1;
                    cnt++;

                    break;
                }
            }
        }
    }

    cout<<cnt<<endl;


    return 0;
}
