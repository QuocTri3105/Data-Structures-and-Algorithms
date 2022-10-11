#include<stdio.h>
int main(){
	int n;
	int temp;
	printf("Nhap so phan tu cua mang:\n");
	scanf("%d",&n);
	int array[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap vao so phan tu thu %d : ",i);
		scanf("%d",&array[i]);
	}
	
	for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] < array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    
	for(int i=0;i<n;i++){
		printf("%d  ",array[i]);
	}
	
	printf("\n");
	
	for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
