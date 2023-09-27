#include<stdio.h>

int main (){
	
	int soThuNhat, soThuHai;
	
	printf ("nhap vao so thu nhat: "); 
	scanf("%d",&soThuNhat) ;
	
	printf("\nnhap vao so thu hai: "); 
	scanf("%d",&soThuHai); 
	
    int hieu=soThuNhat-soThuHai;
    int tong=soThuNhat+soThuHai;
    
	printf("\n hieu cua so %d va so %d  hai so la: %d",soThuNhat,soThuHai, hieu); 
    printf("\n tong cua so %d va so %d  hai so la: %d",soThuNhat,soThuHai, tong); 
    
	
	return 0  ;
} 
