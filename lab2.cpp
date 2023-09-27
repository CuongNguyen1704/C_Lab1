#include <stdio.h> 

int bai1(){
	
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

int bai2(){
	
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

int bai3(){
	float R;
	printf("ban kinh cua duong tron la :");
	scanf("%2f",&R);
	
	float dientich=R*R*3.14;
	float chuvi=(R*2)*3.14;
	
	printf("chu vi cua hinh chu nhat la :%.2f",chuvi);
	printf("\ndientich cua hinh chu nhat la :%.2f",dientich);
	
	
	return 0;
}

int bai4(){
		float toan,ly,hoa;
	
	printf("moi nhap vao diem mon toan: ");
	scanf("%f",&toan);
	
	printf("moi nhap vao diem mon ly: ");
	scanf("%f",&ly);
	
	printf("moi nhap vao diem mon hoa: ");
	scanf("%f",&hoa);
	
	float DTB=(toan*3+ly*2+hoa)/6;;
	printf("Diem trung binh cua ban la: %f",DTB);
	
	return 0;
}



int main(){
	
	printf("-------------menu----------\n");
	printf("1. Bai 1\n");
	printf("2. Bai 2\n");
	printf("3. Bai 3\n");
	printf("4. Bai 4\n");
	printf("5. thoat\n");
	printf("-----------------------------\n");
	
	int chon;
	
	printf("Moi chon chuc nang: \n");
	scanf("%d",&chon);
	
	switch(chon){
		case 1:
			bai1();
			break;
		case 2:
			bai2();
			break;
		case 3:
			bai3();
			break;
		case 4:
			bai4();
			break;
		default:
			break;
	}
		
	return 0;
	
	
}
