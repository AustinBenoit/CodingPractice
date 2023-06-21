#!/usr/bin/python3

import sys
import re 

digits = re.compile( r"""\d+""")

for line in sys.stdin:
    numbers = digits.findall(line)
    if len(numbers) == 2 and int(numbers[0]) + int(numbers[1]) > 0 :
        if int(numbers[0]) + int(numbers[1]) == 13:
            print("Never speak again.")
        elif int(numbers[0]) == int(numbers[1]):
            print("Undecided.")
        elif int(numbers[0]) > int(numbers[1]):
            print("To the convention.")
        else:
            print("Left beehind.")