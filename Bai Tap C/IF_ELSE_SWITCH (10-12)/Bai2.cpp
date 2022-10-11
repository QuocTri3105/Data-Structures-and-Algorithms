#include<stdio.h>
#include<conio.h>
int main()

{
	int a,b;
	printf("Nhap A:\n");
	scanf("%d",&a); 
	printf("Nhap B:\n");
	scanf("%d",&b); 
	if(a*b>1000){
		printf("Tich cua A va B lon hon 1000");
	}else{
		printf("Tich cua A va B nho hon 1000");
	}
	getch();
	return 1;
}
