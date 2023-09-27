#include<stdio.h>

int main(){
	
	float R;
	printf("ban kinh cua duong tron la :");
	scanf("%f",&R);
	
	float dientich=R*R*3.14;
	float chuvi=(R*2)*3.14;
	
	printf("chu vi cua hinh chu nhat la :%.2f",chuvi);
	printf("\ndien tich cua hinh chu nhat la :%.2f",dientich);
	
	
	return 0;
} 
