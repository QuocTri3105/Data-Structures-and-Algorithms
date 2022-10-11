#include<stdio.h>
#include<math.h>
void insertionsort(int arr[], int n)
{
    int key;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int output(int arr[],int n){
	for(int i =0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}
int main(){
	int n,key;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i =0;i<n;i++){
		printf("Nhap phan tu thu %d :",i);
		scanf("%d",&arr[i]);
	}
	insertionsort(arr, n);
	output(arr, n);	
}
