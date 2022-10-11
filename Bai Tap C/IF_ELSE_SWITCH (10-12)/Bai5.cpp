#include<stdio.h>
int main()

{
	int diem;
	printf("Nhap diem so cua ban:\n");
	scanf("%d",&diem);
	if(diem>=75 && diem<=100){
		printf("Ban thuoc loai A");
	}else if(diem<75 && diem>=60){
		printf("Ban thuoc loai B");
	}else if(diem<60 && diem>=45){
		printf("Ban thuoc loai C");
	}else if(diem<45 && diem>=35){
		printf("Ban thuoc loai D");
	}else if(diem<35 && diem>=0){
		printf("Ban thuoc loai E");
	}else
	printf("So diem nhap vao khong hop le !");
	return 1;
}
