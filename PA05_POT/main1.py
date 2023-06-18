#PA05_POT
from tqdm import tqdm

data=[[n**d%10 for d in range(1,5)] for n in range(0,10)]
print(data)

for a in range(2, 1000000000):
    print(2)
    for n in tqdm(range(1, 1000000000)):
        if(data[(a%10)][(n-1)%4]):

            print("Index",(a%10),(n-1)%4)