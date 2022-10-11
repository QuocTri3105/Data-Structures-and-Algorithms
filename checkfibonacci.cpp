#include<stdio.h>

int fibonacci(int n)
        {
            int a = 0;
            int b = 1;
            if (n==a || n==b) return true;
            int c = a+b;
            while(c<=n)
            {
                if(c == n) return true;
                a = b;
                b = c;
                c = a + b;
            }
            return false;
        }
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	if(fibonacci(n)==true){
		printf("%d n la so fibonacci",n);
	}else{
		printf("%d n khong phai la so fibonacci",n);
	}
}
