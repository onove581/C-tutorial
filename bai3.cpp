#include<stdio.h>
int main()
{
	
	
	printf("nhap so n: \n");
	int n;
	scanf("%d",&n);
	printf("cac uoc so thu  cua n la:\n");
	int s=0;
	for(int i=1;i<=n;i++)
	{
		
		if(n%i==0)
		{
		
		printf("  %d\n",i);
		
		s=s+i*i;
	}
	}
	printf("tong uoc so la: %d",s);
	
}
