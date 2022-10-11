#include<stdio.h>

 int sumatob (int a, int b){
 	int sum=0;
 	for (int i=a; i<=b;i++){
 		sum =sum+i;
	 }
	 printf("Tong cac so tu %d toi %d la: %d",a,b,sum);
 }
 int main(){
 	int a,b;
 	printf("Nhap a: ");
 	scanf("%d",&a);
 	printf("Nhap b: ");
 	scanf("%d",&b);
 	sumatob(a,b);
 }
