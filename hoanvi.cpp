#include<stdio.h>
int swap(int a, int b){
	int temp=0;
	temp=a;
	a=b;
	b=temp;
	printf("a = %d, b=%d",a,b);
}
int main(){
	int a,b,temp;
	scanf("%d",&a);
	scanf("%d",&b);
	swap(a,b);
}

