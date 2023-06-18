def CharSplit(lista):
    output=[]
    tmp = None
    for char in lista:
        if(tmp != None):
            
            if(tmp[0] != char):
                output.append(tmp)
                tmp=char
                
            else:
                tmp+=char
        else:
            tmp = char
    output.append(tmp)
    return output

for _ in range(0, int(input())):
    print(''.join( [part if len(part) <3 else str(part[0])+str(len(part)) for part in CharSplit(list(input()))]))