 #include<stdio.h>
int main()
{ 
    int A[100][100];
    int i,j,n,s=0;
    printf("Nhap n = "); scanf("%d",&n);
    
    printf("Nhap vao ma tran:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        	printf("A[%d,%d]=",i,j);
            scanf("%d",&A[i][j]);
            if(A[i][j]%3==0) 
						s=s+A[i][j];
        }
        printf("\n");
    }
    printf("Cac phan tu thuoc duong cheo chinh:ma tran vua nhap la:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        		if(i==j) 
            printf("A[%d,%d] =%d ",i,j,A[i][j]);
        }
        printf("\n");
    }
    printf("Tong cac so A[i,j] chia het cho 3 : %d",s);	
}
 
