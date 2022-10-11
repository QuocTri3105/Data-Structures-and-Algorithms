#include<stdio.h>
#include<conio.h>
int main()

{
	int a,b;
	printf("Nhap A:\n");
	scanf("%d",&a); 
	printf("Nhap B:\n");
	scanf("%d",&b); 
	if(a%b==0){
		printf("A chia het cho B");
	}else{
		printf("A ikhong chia het cho B");
	}
	getch();
	return 1;
}
