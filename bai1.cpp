#include<stdio.h>
int main()
{
	int a;
	int count=0;
	int b;
	printf("nhap so n: \n");
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		
		printf("nhap n thu :%d\n",i);
		scanf("%d",&b);
		
		if(b>0)
		{
			count++;
		  printf("so n>0 thu %d la : %d\n",i,b);
		}	
		else printf("so ban nhap be hon 0\n ");
		
	}
	
	printf("co tat ca %d so n>0",count);
}
