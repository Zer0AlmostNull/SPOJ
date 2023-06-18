for _ in range(int(input())):
    points = int(input())
    numbers = list(map(int, input().split()))
    count = 0
    max_num = 0

    numbers.sort()

    for i in range(len(numbers) - 1, -1, -1):
        if numbers[i] == max_num:
            print(numbers[i], end=" ")
            count += 1
        else:
            break

    for i in range(len(numbers) - count):
        print(numbers[i], end=" ")

    print()
