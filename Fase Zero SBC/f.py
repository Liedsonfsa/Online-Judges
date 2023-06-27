n = int(input())
m = int(input())

dna = str(input())
pro = str(input())

casos = int(input())

for i in range(casos):
    a = int(input())
    b = int(input())

    print(dna.count(pro[a - 1:b]))



# aaa