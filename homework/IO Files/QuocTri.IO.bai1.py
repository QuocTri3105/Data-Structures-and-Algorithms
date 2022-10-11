a=0
f=open('d:/input.txt','r')
a=f.readline() #doc dong dau tien
f.seek(4) #chuyen den vi tri thu 4 / dau dong 2
list=[]
list=f.readline() #doc dong 2
f.close()


listn=[]
list =list.split() #bo dau " " ra khoi mang goc
for i in range (0,len(list)):
    listn.append(int(list[i])) #chuyen mang str thanh int
print(listn)
print("Ket qua doc file la: ")
print("A = ",a)
print("Mang :",listn)


tongle=0
for i in range (0,len(listn)): #tim tong so le trong mang Int
    if listn[i]%2==1:
        tongle=tongle+listn[i]
print("Tong cac so le trong day la:", tongle)

x=open('d:/tongle.txt','w')
x.write(str(tongle)) #chuyen ket qua thanh dang str va gi vao file tong le
x.close

