#include <stdio.h>
void printascii(char a,char b)
{
	char pawn;
    if (a>b){
    	pawn=a;
    	a=b;
    	b=pawn;
	}else{
		for(char i =a;i<=b;i++){
			printf("%c : %d\n",i,i);
		}
	}
}

int main(){
	char a,b;
	printf("Nhap chu cai thu nhat: ");
	scanf("%c",&a);
	printf("Nhap vao chu cai thu hai: ");
	scanf(" %c",&b);
	printascii(a,b);
}
