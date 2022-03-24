#include <stdio.h>
int main()
{
    int a,b,t;
    scanf("%d",&t);
    for (int i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        if(a<b)
        {
            printf("<\n");
        }
        if(a>b)
        {
            printf(">\n");
        }
        else if(a==b)
            printf("=\n");

    }
    return 0;
}
