def giaithua(n):
    tich =1
    for i in range(1,n):
        tich =tich*n
    return tich

n=int(input("Nhap vao gia tri n: "))
print(giaithua(n))