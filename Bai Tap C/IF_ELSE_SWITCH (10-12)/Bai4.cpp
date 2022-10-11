#include<stdio.h>
int main()

{
	char lnv;
	int luongcb,luongct;
	printf("Nhap loai nhan vien (a,b,o):\n");
	scanf("%s",&lnv);
	printf("Nhap luong co ban:\n");
	scanf("%d",&luongcb);
	switch(lnv){
		case 'a': luongct=300+luongcb;
			break;
		case 'b': luongct=250+luongcb;
			break;
		case 'o': luongct=100+luongcb;
			break;
	}
	printf("Luong cuoi thang cua ban la: %d",luongct);
	return 1;
}
