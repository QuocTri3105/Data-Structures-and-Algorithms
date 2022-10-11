#include<stdio.h>
void input(){
	int max, n;
	printf("Nhap vao so luong phan tu can xet: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<=n-1;i++){
		printf("Nhap vao gia phan tu thu %d :",i);
		scanf("%d",&arr[i]);
	}
}

int findmax(int arr[],int max,int n){
	max=0;
	for(int i=0;i<=n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("%d",max);
}

int main(){
	input();
	findmax(int arr[];int max;int n);	
}
