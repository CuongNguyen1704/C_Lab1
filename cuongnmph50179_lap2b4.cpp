#include <stdio.h>


int main (){
	float toan,ly,hoa;
	
	printf("moi nhap vao diem mon toan: ");
	scanf("%f",&toan);
	
	printf("moi nhap vao diem mon ly: ");
	scanf("%f",&ly);
	
	printf("moi nhap vao diem mon hoa: ");
	scanf("%f",&hoa);
	
	float DTB=(toan*3+ly*2+hoa)/6;
	printf("Diem trung binh cua ban la: %.2f",DTB);
	
	return 0;
}


