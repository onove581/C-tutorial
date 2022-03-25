#include<stdio.h>
int main()
{
	int j,i,a,n,s=0;
	printf("Ma tran vuong A(NxN)\n");
	printf("Nhap so n: ");
	scanf("%d",&n);
	printf("Nhap vao ma tran:\n");
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
					printf("A[%d,%d]=",i,j); 
                	scanf("%d",&a);
						if(a%3==0) 
						s=s+a;
						
			}
						printf("\n");
			
	   }
	   printf("Cac phan tu thuoc duong cheo chinh:\n");
	    for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				  if(i==j) 
						printf(" A[%d,%d] ",i,j);    
			  }
			  
		printf("\n");		
		}
	printf("Tong cac so A[i,j] chia het cho 3 : %d",s);			
}
