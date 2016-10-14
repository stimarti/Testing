#!/Users/stiebritz/anaconda/bin/python

from math import sqrt

l = [ i*i for i in range(1,10)]

print l

func = lambda x: sqrt(x) - 4

for i in l:
  print(func(i))

