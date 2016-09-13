#!usr/bin/env python
from collections import *
from heapq import *
from bisect import *
from math import *
from itertools import *
from random import *

def main():
	cases=int(raw_input())
	for case in range(cases):
		hold=map(int,raw_input().split())
		print '%.1f' % (min(hold)/2.0)

if __name__=='__main__':
	main()