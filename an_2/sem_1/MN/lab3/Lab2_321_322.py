import numpy as np
rng = np.random.default_rng(0)  #generator
#----------- Input ---------------------------------
n = 6  # dimensiunea matricei
A = rng.integers(1,11, size = (n,n))
A = np.triu(A,-1)
A[n-1,:] = rng.integers(1,11, size = (1,n))
A =A.astype('float')
b =  rng.integers(-10,11, size = (n,1)).astype('float')
#-------------------------------------------------------------
print('-----------A------------')
print(A)
print('-----------b------------')
print(b)
print("Solution:", np.linalg.inv(A)@b)

#Definiti functia EGPP (Algoritm 2.4)
# [!]: Pentru rezolvarea sistemului Ax = b a se vedea Algoritm 2.6


#Algoritmul UTRIS pentru rezolvarea sistemului: Ux = b
def Utris(U,b):
    n = U.shape[0]
    x = np.zeros((n,1))
    for i in range(n-1,-1, -1):
        s = b[i]
        for j in range(i+1,n):
            s =s - U[i][j]*x[j]
        x[i] = s/U[i][i]
    return x
