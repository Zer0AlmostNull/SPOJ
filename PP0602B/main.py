t = int(input())

for _ in range(t):
    l, k = map(int, input().split())
    matrix = [list(input().split()) for _ in range(l)]

    outer_rim = [None for _ in range(2*(l+k-2))]

    c = 0
    for x in range(0,k):
        outer_rim[c] = matrix[0][x]
        c+=1 

    for x in range(1, l-1):
        outer_rim[c] = matrix[x][k-1]
        c+=1
    
    for x in range(k-1, 0, -1):
        outer_rim[c] = matrix[l-1][x]
        c+=1 

    for x in range(l-1, 0, -1):
        outer_rim[c] = matrix[x][0]
        c+=1

    outer_rim =  outer_rim[1:] + [outer_rim[0]]
    ###

    c = 0
    for x in range(0,k):
        matrix[0][x] = outer_rim[c]
        c+=1 

    for x in range(1, l-1):
        matrix[x][k-1] = outer_rim[c]
        c+=1
    
    for x in range(k-1, 0, -1):
        matrix[l-1][x] = outer_rim[c]
        c+=1 

    for x in range(l-1, 0, -1):
        matrix[x][0] = outer_rim[c]
        c+=1
    
    for row in matrix:
        print(*row, sep= ' ', end= '\n')
