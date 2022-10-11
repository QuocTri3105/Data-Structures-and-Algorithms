from ast import Index
#Tim vi tri cua gia tri max
list=[]
n=int(input("Nhap vao so luong phan tu:"))
for i in range(0,n,1):
    print("Nhap vao phan tu thu",i,":")
    x=int(input())
    list.append(x)
print(list)
max=max(list)#Tim gia tri max
index=list.index(max)#Tim vi tri cua gia tri max
print("So lon nhat la :",max,". Vi tri cua ",max,"la: ",index)
