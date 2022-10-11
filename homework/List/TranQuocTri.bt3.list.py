#Xoa phan tu am
list=[]
n=int(input("Nhap vao so luong phan tu:"))
for i in range(0,n,1):
    print("Nhap vao phan tu thu",i,":")
    x=int(input())
    list.append(x)
print(list)
for j in range (0,n-1,1):
    if(list[j]<0):
        list.remove(list[j]) #Loai bo phan tu ra khoi mang
print(list)