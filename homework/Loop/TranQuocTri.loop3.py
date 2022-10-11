print("1. In cac so tu 1 den 100\n2. In cac so tu 100 ve 1.\n3. Tong cac so tu 1 den 50.")
menu=int(input("Chon cong viec can thuc hien: "))
if menu == 1:
    i=1
    for i in range(1,101):
        print(i)
elif menu ==2:
    n=101
    for i in range(0,100):
        n=n-1
        print(n)
elif menu==3:
    tong =0
    for i in range(0,50):
        tong =tong +i
    print(tong)
else:
    print("Vui long nhap 1 gia tri co trong menu")
