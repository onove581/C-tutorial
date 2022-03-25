#include <stdio.h>


int main()
{
char n;
printf("nhap vao x : \n");
int x;
scanf("%d",&x);
printf(" nhap vao y : \n");
int y;
scanf("%d",&y);
printf(" nhap vao 1 trong 4 toan tu +, -, *, / = ");
scanf("%s",&n);
if(n=='+') printf("x+y= %d + %d = %d ",x,y ,x+y);
if(n=='-') printf("x-y= %d - %d = %d \n",x,y,x-y);
if(n=='*') printf("x*y = %d * %d = %d",x,y,x*y);
if((n=='/') &&( y !=0)) printf("x/y = %d / %d = %f ",x,y,(float)x/y);
 if((n=='/') &&( y ==0))printf("khong chia dc vi y phai la so khac  0");

}


