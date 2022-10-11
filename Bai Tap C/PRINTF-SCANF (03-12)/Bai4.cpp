#include<stdio.h>

int main() 
{
    char name[20];
    float basic,daper,bonper,loandet,salary;
    
    printf("Enter name:\n");
    scanf("%s",&name);
    
    printf("Enter basic:\n");
    scanf("%f",&basic);
    
    printf("Enter daper:\n");
    scanf("%f",&daper);
    
    printf("Enter bonper:\n");
    scanf("%f",&bonper);
    
    printf("Enter loandet:\n");
    scanf("%f",&loandet);
    
    salary = basic + basic * daper/100 + bonper * basic/100 - loandet;
    
	printf("\tName\t\tBasic\t\tSalary");
	printf("\n\t%s\t\t%0.1f\t\t$%0.2f",name,basic,salary);
	
	return 0;
}
