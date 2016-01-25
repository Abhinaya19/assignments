#include <stdio.h>
void rep(int n,int b)
{
    int n1,i=0,a[20],m;
    n1=n;
    while(n1>0)
    {
        a[i]=n1%b;
        n1=n1/b;
        i++;
    }
    m=i-1;
    for(i=m;i>=0;i--)
    {
        if(a[i]<=9)
        {
            printf("%d",a[i]);
        }
        else
        {
            printf("%c",a[i]+55);
        }
    }
}

void main()
{
    int n,b;
    printf("enter number");
    scanf("%d",&n);
    printf("\nenter base");
    scanf("%d",&b);
    rep(n,b);
}

