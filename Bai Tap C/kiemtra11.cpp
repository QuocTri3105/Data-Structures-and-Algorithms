#include<stdio.h>
int main(){
	int x,y,ketqua;
	printf("Nap vao gia tri x:");
	scanf("%d",&x);
	printf("Nap vao gia tri y:");
	scanf("%d",&y);
	ketqua=(x+y)/(x^2+y^2+1);
	printf("Ket qua ham 1 la: %d",ketqua);
}
