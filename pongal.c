#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	system("clear");
	int i=0;
	char a[]="Pongal Wishes";
	while(a[i]!='\0')
	{
		printf("%c",a[i]);
		sleep(1);
		i++;
	}
	return 0;
}
