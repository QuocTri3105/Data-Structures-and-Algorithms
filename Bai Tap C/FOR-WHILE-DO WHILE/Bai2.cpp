#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,i,s=0;
	printf("Nhap so thu nhat:\n");
	scanf("%d",&num1);
	printf("Nhap so thu hai:\n");
	scanf("%d",&num2);
	printf("Cac so le giua %d va %d bao gom: ",num1,num2);
	for(i=num1;i<=num2;i++){
		if(i%2!=0){
			s=s+i;		
			printf("%d  ",i);
		}
		
	}
	printf("\nTong cac so tren la %d",s);
}
