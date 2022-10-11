from cmath import sqrt


a=int(input("Nhap a: "))
b=int(input("Nhap b: "))
c=int(input("Nhap c: "))
x2=0
x1=0
delta = float(b**2-4*a*c)
if delta<0:
    print("Phuong trinh vo nghiem")
elif delta == 0:
    x1,x2==-(b/2*a)
    print(x1,x2)
elif delta>0:
    x1=((-b+sqrt(delta))/2*a)
    x2=((-b-sqrt(delta))/2*a)
    print(x1,x2)