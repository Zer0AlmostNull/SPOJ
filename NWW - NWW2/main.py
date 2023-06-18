def NWD(a, b):
    if b != 0:
        return NWD(b, a % b)
    return a

def NWW(a, b):
    return (a * b)/NWD(a, b)

def NWW_list(l):
    if(len(l) == 2):
        return NWW(l[0], l[1])
    else:
        return NWW(l[0], NWW_list(l[1:]))
    

def main():
    tests_count = int(input())
    
    for _ in range(tests_count):
        n = int(input())
        numbers = list(map(int, input().split(maxsplit=3)))[:n]
        print(int(NWW_list(numbers)))
    
if __name__ == '__main__':
    main()