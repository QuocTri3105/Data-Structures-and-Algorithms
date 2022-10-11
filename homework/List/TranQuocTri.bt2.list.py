#Tong cac phan tu co vi tri chan
list=[]
n=int(input("Nhap vao so luong phan tu:"))
for i in range(0,n,1):
    print("Nhap vao phan tu thu",i,":")
    x=int(input())
    list.append(x)
print(list)
sum=0
for j in range(2,n,2):
    sum=sum+list[j]
print(sum)