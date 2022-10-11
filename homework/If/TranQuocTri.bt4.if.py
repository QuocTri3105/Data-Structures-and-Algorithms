n = int(input("Nhap vao so N: "))
if n%2!=0:
    print("So le")
elif n%2==0 and n>=100:
    print("So chan va lon hon hoac bang 100")
elif n<100:
    print("So chan va be hon 100")