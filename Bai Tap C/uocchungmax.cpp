#include<stdio.h>
int main(){
	int a, b, gcd; 
	printf("Nhap vao so A: ");
	scanf("%d",&a);
	printf("Nhap vao so B: ");
	scanf("%d",&b);
	
	if (a == 0 || b == 0){
        printf("Uoc chung giua A va B khong ton tai");
    }else while (a != b){
        if (a > b){
            a =a-b;
        }else{
            b=b-a;
        }
    }
    printf("Uoc chung lon nhat cua A va B la %d",a);
}
