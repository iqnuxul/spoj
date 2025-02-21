def Z(N): 
    count = 0 
    while N >= 5: 
        N //= 5   
        count += N 
    return count 

T = int(input()) 
for _ in range(T): 
    N = int(input()) 
    result = Z(N) 
    print(result) 