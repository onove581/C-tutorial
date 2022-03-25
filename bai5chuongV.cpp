#include<stdio.h>
int main()
{
int a;


printf("nhap 1 thang :\n");
scanf("%d",&a);
if((a>1)&&(a<=12))
{

	
if(a==2)
{  
int  nam;
printf("nhap nam: \n");
scanf("%d",&nam);
		if(nam %4 == 0) printf("thang %d co 29 ngay \n",a);
				else printf("thang %d co 28 ngay \n",a);

}
 if((a==4) ||(a==6)||(a==9)||(a==11)) printf(" thang %d co 31 ngay \n",a);
if((a==1)|| (a==3)||(a==5)||(a==7)||(a==8)||(a==10)||(a==12)) printf("thang %d co 30 ngay\n",a);
}
 else printf("ban nhap sai thang de nghi nhap lai.");

}
