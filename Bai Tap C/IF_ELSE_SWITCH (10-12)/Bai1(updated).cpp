#include <stdio.h>
int a,b;

int input(){
	printf("Nhap A:\n");
	scanf("%fl",&a);
	printf("Nhap B:\n");
	scanf("%fl",&b);
	}
	
void process(){
	if(a%b==0){
		printf("A chia het cho B");
	}else
	printf("A khong chia het cho B");
}

int main(){
	input();
	process();
	return 1;
}
