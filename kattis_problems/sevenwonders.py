#!/usr/bin/env python

x = input()

t = x.count('T');
c = x.count('C');
g = x.count('G');

sets = min(t,c,g)

print( t * t + c * c + g * g + 7 * sets)