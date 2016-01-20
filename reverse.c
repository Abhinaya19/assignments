#include <stdio.h>
void main()
{
  int n,rev=0,s;
  printf("Enter the number");
  scanf("%d", &n);
  while(n!=0)
  {
     s=n%10;
     rev=rev*10;
     rev=rev+s;
     n=n/10;
  }
  printf("OUTPUT= %d",rev);
}
