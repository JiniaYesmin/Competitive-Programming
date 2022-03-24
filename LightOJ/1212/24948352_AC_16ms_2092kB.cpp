#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=1;
    cin>>t;
    while(t--)
    {
        int n,m,a;
        string s;
        deque<int>dq;
        cin>>n>>m;
        cout<< "Case "<< c++<< ":"<<endl;
        while(m--)
        {
            cin>>s;
            if(s=="pushLeft"||s=="pushRight")
            {
                cin>>a;
                if(dq.size()<n)
                {
                    if(s=="pushRight")
                    {
                        dq.push_back(a);
                        cout<< "Pushed in right: "<<a<<endl;
                    }
                    else
                    {
                        dq.push_front(a);
                        cout<< "Pushed in left: "<<a<<endl;
                    }
                }
                else
                {
                    cout<< "The queue is full"<<endl;
                }
            }
            else
            {
                if(!dq.empty())
                {
                    if(s=="popLeft")
                    {
                        cout<< "Popped from left: "<<dq.front()<<endl;
                        dq.pop_front();
                    }
                    else
                    {
                         cout<< "Popped from right: "<<dq.back()<<endl;
                        dq.pop_back();
                    }
                }
                else
                {
                    cout<< "The queue is empty"<<endl;
                }
            }
        }
    }
    return 0;
}
