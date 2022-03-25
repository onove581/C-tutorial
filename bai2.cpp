#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	int b;
	int s=0;
	do{
	printf("nhap a :\n");
	scanf("%d",&a);
	printf("nhap b :\n");
	scanf("%d",&b);
	if((a<0) ||(b<0)) printf("nhap lai a va b \n");
	}while((a<0) ||(b<0));
	
	s=pow(a,b);
	printf("ket qua cua a^b la %d",s);
}
