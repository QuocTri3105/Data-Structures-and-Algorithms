year=int(input("Nhap vao nam can xet: "))
if((year % 400 == 0) or (year % 100 != 0) and (year % 4 == 0)):   
    print("Day la 1 nam nhuan");  
else:  
    print ("Day khong phai mot nam nhuan")  