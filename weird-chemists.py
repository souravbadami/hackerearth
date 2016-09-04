#!usr/bin/env python
from __future__ import print_function
from collections import *
from heapq import *
from bisect import *
from math import *
from itertools import *
from random import *
 
def main():
	n,m = map(int,raw_input().strip().split())
	_list = map(int,raw_input().strip().split())
	happy = 0
	for i in xrange(m):
		l,r,x = map(int,raw_input().strip().split())
		#_sum = sum(_list)
		_sum = 0
		for j in xrange(l-1,r):
			_sum = _sum + _list[j]
		if _sum >= x:
			happy+= 1
	print(happy)
	
if __name__=='__main__':
	main()
