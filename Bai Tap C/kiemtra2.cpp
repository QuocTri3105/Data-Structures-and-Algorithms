#include<stdio.h> 
int main(){
	int a, b, c;
	int max;
	printf("Nhap vao so a: ");
	scanf("%d",&a);
	printf("Nhap vao so b: ");
	scanf("%d",&b);
	printf("Nhap vao so c: ");
	scanf("%d",&c);
	max=a;
	if(max-b>0){
		max=b;
	}else if(max-c>0){
		max=c;
	}else{
		max=a;
	}
	printf("So lon nhat la %d",max);
}
