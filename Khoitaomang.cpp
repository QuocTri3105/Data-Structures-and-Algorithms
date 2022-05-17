#include<stdio.h>

void softgiamdan(int array[],int n){
	int temp=0;
	for (int i=0; i<n; i++){
		for (int j=1+1;j<n;j++){
			if(array[i]<array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
}

void softtangdan(int array[],int n){
	int temp=0;
	for (int i=0; i<n; i++){
		for (int j=1+1;j<n;j++){
			if(array[i]>array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
}

void input(int array[],int n){
	for(int i=0; i<=n-1;i++){
		printf("Nhap vao phan tu thu %d: ",i);
		scanf("%d",&array[i]);
	}
}

void output(int array[],int n){
	for(int i =0;i<=n-1;i++){
		printf("%d ",array[i]);
	}
}

int truynhap(int array[],int n){
	int index;
	printf("Nhap vao vi tri phan tu ban muon truy nhap: ");
	scanf("%d",&index);
	if(index <=n){
		printf("Phan tu o vi tri %d co gia tri la: %d ",index,array[index]);
	}else{
		printf("Vi tri ban nhap khong ton tai");
	}
}

int search(int array[],int n){
	int index;
	int value;
	printf("Nhap vao gia tri phan tu ban muon tim: ");
	scanf("%d",&value);
	for(int i=0; i<n; i++){
		if(array[i]==value){
			index=i;
		}
	}
	printf("Vi tri dau tien cua %d trong mang la %d",value,index);
}



int main(){
	int n;
	printf("Nhap vao so phan tu cua mang : ");
	scanf("%d",&n);
	int array[n];
	input(array,n);
	
	truynhap(array,n);
	
}
