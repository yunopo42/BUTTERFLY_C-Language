#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	////////////////////////////////////////////////////KEBELEK KANADI///////////////////////////////////
	int uzunluk,i,j;
	printf("Kanadin yarisinin uzunlugu kac birim olsun? --> ");
	scanf("%d",&uzunluk);
	for(i=1;i<=uzunluk;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=1;j<=uzunluk-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=uzunluk-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//diðer yarýsý
	for(i=1;i<=uzunluk;i++)
	{
		for(j=i;j<=uzunluk;j++)
		{
			printf("*");
		}
		for(j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		for(j=i;j<=uzunluk;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	
	return 0;
}
