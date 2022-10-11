#include<stdio.h>
int main()

{
	int a,b,c;
	printf("Nhap A:\n");
	scanf("%d",&a); 
	printf("Nhap B:\n");
	scanf("%d",&b); 
	c=a-b;
	if(c==a){
		printf("Hieu so bang voi: ");
		printf("%d",a);
	}else if(c==b){
		printf("Hieu so bang voi: ");
		printf("%d",b);
	}else{
		printf("Hieu so khong bang voi bat ki so nao");
	}
	return 1;
}
