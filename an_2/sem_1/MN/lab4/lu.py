import numpy as np
import scipy as sp
import pprint

A = sp.array([ [7,3,-1,2], [3,8,1,-4], [-1, 1, 4, -1], [2, -4, -1, 6]])

P, L, U = sp.linalg.lu(A)

pprint.pprint(P)
print()
pprint.pprint(L)
print()
pprint.pprint(U)





