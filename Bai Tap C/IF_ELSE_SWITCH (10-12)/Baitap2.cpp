#include <stdio.h>
int main()
{
	double a,b,s;
	char v;
	printf("Nhap a:\n");
	scanf("%lf",&a);
	printf("Nhap b:\n");
	scanf("%lf",&b);
	printf("Nhap phep tinh (+, -):\n");
	scanf("%s",&v);
	switch(v){
		case '+':
			s=a+b;
			printf("Tong a + b la: %5.1lf",s);
			break;
		case '-':
			s=a-b;
			printf("Hieu a - b la: %5.1lf",s);
			break;
		default:
			printf("Khong xac dinh");
			break;
	}
}
