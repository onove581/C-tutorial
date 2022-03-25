#include<stdio.h>
int main ()
{
int  n;
double s=1;
printf ("nhap n:");
scanf ("%d",&n);
for (int i=1;i<=n;i++)
s= s*(double)i;
printf ("giai thua cua n= %d la : %lf",n, s);
}
