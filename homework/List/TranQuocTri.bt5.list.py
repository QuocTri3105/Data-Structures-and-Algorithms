#Thay cac phan tu am bang gia tri 0
list=[]
n=int(input("Nhap vao so luong phan tu:"))
for i in range(0,n,1):
    print("Nhap vao phan tu thu",i,":")
    x=int(input())
    list.append(x)
print(list)
for j in range (0,n):
    if(list[j]<0):
        list[j]=0 #thay phan tu am list[j] bang 0
print(list)