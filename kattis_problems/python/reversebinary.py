#!/usr/bin/env python

x = bin(int(input()))
x = str(x)
x = x.lstrip('0b')
x =  x[::-1]
x = int(x,2)

print(x)