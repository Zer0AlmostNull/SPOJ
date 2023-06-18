#https://pl.spoj.com/problems/AL_11_01/

# highTAB, widthTAB, highREC , widthREC, WinPerREC 
highTAB, widthTAB, highREC, widthREC, WinPerREC = [int(x) for x in input().split(" ")]

tab=[[0 for _ in range(0, widthTAB)] for _ in range(0, highTAB)]


for h in range(0, highTAB-highREC+1):
    for w in range(0, widthTAB-widthREC+1):
        def countWinInREC():
            tmp=0
            for recH in range(0,highREC):
                for recW in range(0,widthREC):
                    tmp+=tab[h+recH][w+recW]
            return tmp
        if(countWinInREC()<WinPerREC):
            ww ,hh=w,h
            if(h>0):
                hh=h+highREC-1
            if(w>0):
                ww=w+widthREC-1
            tab[hh][ww]=1


for h in range(0, highTAB):
    print(' '.join([str(x) for x in tab[h]]))
