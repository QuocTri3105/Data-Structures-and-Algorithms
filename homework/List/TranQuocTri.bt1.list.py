#Tong cac phan tu le
list=[]
n=int(input("Nhap vao so luong phan tu:"))
for i in range(0,n,1):
    print("Nhap vao phan tu thu",i,":")
    x=int(input())
    list.append(x) #them phan tu vao vi tri cuoi
print(list)
sum=0
for j in range(0,n,1):
    if(list[j]%2==0):
        sum=sum+list[j]
print(sum)