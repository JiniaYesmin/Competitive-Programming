#include<stdio.h>
int main()
{
    int t,a,b,c,s1=0,m,s2=0,s3=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        while(a>0)
        {
            m=a%10;
            s1=(s1*10)+m;
            a/=10;
        }
        while(b>0)
        {
            m=b%10;
            s2=(s2*10)+m;
            b/=10;
        }
        c=s1+s2;
        s1=0,s2=0;
        while(c>0)
        {
            m=c%10;
            s3=(s3*10)+m;
            c/=10;
        }
        printf("%d\n",s3);
        s3=0;
    }
    return 0;
}
