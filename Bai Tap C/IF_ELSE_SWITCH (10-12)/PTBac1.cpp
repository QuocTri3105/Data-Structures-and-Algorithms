#include<stdio.h> 
int main() 
{
	float a,b,x;
	printf("Nhap A:\n");
	scanf("%f",&a);
	printf("Nhap B:\n");
	scanf("%f",&b);
	if(a==0 && b==0){
		printf("Phuong trinh vo so nghiem");
		return 1 ;
	}else if(a==0 && b!=0){
		printf("Phuong trinh vo nghiem");
		return 1;
	}else{
		x=(-b)/a;
		printf("Phuong trinh co nghiem x= %3.3f",x);
	}	
}
