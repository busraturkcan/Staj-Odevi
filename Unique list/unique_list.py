def unique(list):
	unique_list = []
	for x in list:
		if x not in unique_list:
			unique_list.append(x)
	for x in unique_list:
		print(x)

number=int(input("Listenizin elaman sayısını giriniz: "))

list=[]
for i in range(0,number):
	list.append(int(input( "Degeri giriniz : ")))

unique(list)

