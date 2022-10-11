from cmath import sqrt
import math
n=eval(input("Nhap vao so n: "))
if isinstance(n, int)== True:
    print("N la so nguyen")
else:
    print("N khong phai so nguyen")
if n%2==0:
    print("N la so chan")
else:
    print("N khong phai so chan")
if n>=0 and n%2==0:
    print("N la so chan duong")
elif n<0 and n %2!=0:
    print("N la so le am")
if n >= 0:
    sr = int(math.sqrt(n))
    if sr**2 == n:
        print("N la so chinh phuong")
    else:
        print("N khong phai so chinh phuong")