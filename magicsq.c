#include <stdio.h>
 
int main( )
{
    int size;
    int a[50][50]={0};
 
    printf("Enter the size 0f odd number: ");
    scanf("%d", &size);
    
    int sqr = size * size;
    int i = 0, j = size / 2, k;
    int flag=0,tmp=0;
 
    for (k = 1; k <= sqr;k++) 
    {
        if(a[i][j] == 0)
        {
            a[i][j]=k;
         }
        else if(a[i][j]!=0) 
        { 
         
            
            i=i+2;
            j--;
            a[i][j]=k;
         
       
         
        }
        i--;
        j++;
        if (j == size) 
        {
         j -= size;
         
        }
        if (i < 0)
         {
            i += size;
            
        }
  }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
