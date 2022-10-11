#include<stdio.h>
int bubblesort(int arr[],int n){
	int temp;
	for(int i =n;i>=0;i=i-1){
		for(int j=n;j>=0;j=j-1){
			if(arr[j]<arr[j-1]){
			temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			}
		}
	}
}

int output(int arr[],int n){
	for(int i =0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int arr[n];
	for(int i =0;i<n;i++){
		printf("Nhap phan tu thu %d :",i);
		scanf("%d",&arr[i]);
	}
	bubblesort(arr,n);
	output(arr,n);	
}
