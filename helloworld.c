#include<stdio.h>
#include<stdlib.h>
int a[ 10 * 1024 ] = {0};
int b[ 10 * 1024 ] = {0};
int c[ 10 * 1024 ] = {0};
main()
{
	int i = 0;
	for(i=0; i<10*1024; i++)
 {
	a[i]=(int)malloc(1024);
        sleep(2);
}
	printf("Hello World");
	printf("How r u");
}
