#include<stdio.h>
int main(){
	int n;
	int sum;
	printf("Nhap vao so can kiem tra:\n");
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(sum==n){
		printf("\n%d la so hoan hao !",n);
	}else{
		printf("\n%d khong phai la so hoan hao !",n);
	}
}
