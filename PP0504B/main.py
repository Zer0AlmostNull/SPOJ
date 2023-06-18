def string_merge(a,b):
    output=""

    aIndex=0
    bIndex=0
    tmp=2*min(len(a), len(b))
    while(aIndex + bIndex != tmp ):
        if(aIndex <= bIndex):
            
            output+=a[aIndex]
            aIndex+=1
        else:

            output+=b[bIndex]
            bIndex+=1

    return output

for _ in range(0,int(input())):
    tmp=input().split(' ')
    print(string_merge(tmp[0],tmp[1]))
