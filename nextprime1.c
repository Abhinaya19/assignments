#include <stdio.h>
int prime(int i)
{
    int j,flag=0;
    for(j=2;i%j!=0;j++)
    {
        if(j==i-1)
        {
           printf("the next prime number is %d",i);
           return 1;
           flag=1;
           break;
        }
    }
    if(flag==1)
    {
        return 0;
    }
}

int main()
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(prime(i))
        {
            break;
        }
    }
        
}
