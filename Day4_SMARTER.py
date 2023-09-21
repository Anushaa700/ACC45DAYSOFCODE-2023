# cook your dish here
import math
T = int(input())
for i in range(T) :
    L,V1,V2 = map(int,input().split())
    T1 = math.ceil(L/V1)
    T2 = math.ceil(L/V2)
    if T1 == T2 :
        print("-1")
    else :
        print(T1 - T2 -1)