#include <stdio.h>

int main()
{
    int i,j,n,flag=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        for(j=2;i%j!=0;j++)
        {
           if(j==i-1)
           {
               printf("the next prime number is %d",i);
               
               flag=1;
               break;
           }
        }
        if(flag==1)
        {
            break;
        }
    }
}
