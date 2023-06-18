for _ in range(int(input())):
    a, b = map(float, input().split('/'))

    # handle signs 
    if a<0 or b<0:
        if a<0 and b<0:
            a*=-1
            b*=-1
        else:
            a = abs(a)
            b = abs(b)
            print('-',end='')

    # handle floatness
    if not (a==int(a) and b==int(b)):
        exp = max(len(str(a).split('.')[1]), len(str(b).split('.')[1]))

        a = a*10**exp
        b = b*10**exp

    # make sure they re int
    a=int(a)
    b=int(b)

    # print integer part
    print(a//b,end='')

    # 
    a %= b 
    index = -1
    output_frac =''

    the_tab_of_rests = []
    while a !=0 and index==-1:
        the_tab_of_rests += [a]

        a*=10
        output_frac += str(a//b)
        a%=b

        if a in the_tab_of_rests:
            index = the_tab_of_rests.index(a)

    
    if len(the_tab_of_rests) != 0:
        if index == -1:
            print(','+output_frac)
        else:
            print(f',{output_frac[:index]}({output_frac[index:]})')
        