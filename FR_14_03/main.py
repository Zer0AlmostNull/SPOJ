
for _ in range(int(input())):
    a=0

    for __ in range(int(input())):
        i = input()

        if i[-1] == 'I':
            a+=1
        else:
            a-=1
    if a < 0:
        print("ERROR")
    else:
        print(a)

