
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i,n,choice,x;

    stack <int> mx;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &choice);
        if(choice == 1)
        {
            scanf("%d", &x);

            if(mx.empty())
            {
                mx.push(x);
            }
            else
            {
                if(mx.top()<x)
                {
                    mx.push(x);
                }

                else
                {
                    mx.push(mx.top());
                }

            }

        }
        else if(choice == 2)
        {
            mx.pop();
        }
        else
        {
            cout<<mx.top()<<endl;
        }
    }


    return 0;
}







