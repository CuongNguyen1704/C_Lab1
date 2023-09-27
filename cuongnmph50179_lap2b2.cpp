#include<stdio.h>

int main(){
	
	float chieuDai;
	printf("chieuDai la : ");
	scanf("%f",&chieuDai);
	
	float chieuRong;
	printf("\nchieuRong la :");
	scanf("%f",&chieuRong);
	 
	float chuvi=(chieuDai+chieuRong)*2;
	float dientich=chieuDai*chieuRong;
	
	printf ("\nchu vi cua hinh chu nhat la :%f",chuvi);
	printf("\ndientich cua hinh chu nhat la :%f",dientich);
	return 0;
}
