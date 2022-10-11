#include <stdio.h>
#include <string.h>
 
int main() 
{
	char date[2];

	printf("Nhap vao ki tu: \n");
	scanf("%s",&date);
	
	if(strcmp(date,"mo")==0){
		printf("Thu hai");
	}else if(strcmp(date,"tu")==0){
		printf("Thu ba");
	}else if(strcmp(date,"we")==0){
		printf("Thu tu");
	}else if(strcmp(date,"th")==0){
		printf("Thu nam");
	}else if(strcmp(date,"fr")==0){
		printf("Thu sau");
	}else if(strcmp(date,"sa")==0){
		printf("Thu bay");
	}else if(strcmp(date,"su")==0){
		printf("Chu nhat");
	}else{
		printf("Khong xac dinh");
	}
}
