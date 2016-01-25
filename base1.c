#include <stdio.h>
int i;
int * rep(int n,int b)
{
    int n1,a[20],m;
    n1=n;
    i=0;
    while(n1>0)
    {
        a[i]=n1%b;
        n1=n1/b;
        i++;
    }
    return a;
}

void main()
{
    int n,b,m;
    int *r;
    printf("enter number");
    scanf("%d",&n);
    printf("\nenter base");
    scanf("%d",&b);
    r=rep(n,b);
    m=i-1;
    for(i=m;i>=0;i--)
    {
        if(r[i]<=9)
        {
            printf("%d",r[i]);
        }
        else
        {
            printf("%c",r[i]+55);
        }
    }
}
