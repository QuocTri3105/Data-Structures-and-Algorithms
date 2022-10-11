#include<stdio.h>
int main()
{
	int num1=0, num2=1, num_next,max,i;
	printf("Nhap so so thuoc day Fibonaci ban muon in ra: ");
	scanf("\n%d",&max);
	printf("\n%d so dau day Fibonaci la:\n",max);
	
	for(i=0;i<=max;i++){
		if(i<=1){
			num_next=i;
		}else{
		
		num_next=num1+num2;
		num1=num2;
		num2=num_next;
		}
		printf(" %d",num_next);
	}
}
