#include<stdio.h>
int main()
{
	printf("-----CHUONG TRINH BANG CUU CHUONG-------------");
	for(int i=1;i<=10;i++)
	{
		printf("\nBANG CU CHUONG SO %d\n",i);
		for(int j=1;j<=10;j++)
		printf("\n%d  x   %d = %d\n",i,j,i*j);
		printf("----------------------");
	}
}
