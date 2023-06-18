#PA05_POT

data = [[n**d%10 for d in range(1,5)] for n in range(0,10)]

for _ in range(0,int(input())):
    tmp1 = input().split(' ')
    print(data[(int(tmp1[0])%10)][(int(tmp1[1])-1)%4])
