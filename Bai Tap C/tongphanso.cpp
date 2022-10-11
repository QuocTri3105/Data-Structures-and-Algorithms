#include<stdio.h>
int main(){
	int n;
	float sum=0;
	printf("Nhap vao so n: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum=sum+(1.0/i);
	}
	printf("Ket qua phep tinh : 1/1 + 1/2 +...+ 1/%d la:\n%0.3f",n,sum);
}
