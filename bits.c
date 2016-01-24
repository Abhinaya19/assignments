#include <stdio.h>
void main()
{
    int i=0,a[20],m,n;
    printf("enter input");
    scanf("%d",&n);
    while(n>0)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }
    printf("output=%d",i);
}
