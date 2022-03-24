
#include <stdio.h>

int main()
{
    int n,a,b;
    int ans = 0;
    scanf ("%d %d %d", &n, &a, &b);
    if (b<0)
    {
        b=-1*b;
        b=b%n;
        if(b>a)
        {
            ans = n - (b-a);
        }
        else if(a==b)
        {
            ans = n;
        }
        else
            ans = a-b;

    }
    else if(b>0)
    {
        b=b%n;
        ans = (b+a);
        if(ans != n)
            ans = ans%n;
    }
    else
        ans = a;
    printf("%d\n", ans);







    return 0;
}



