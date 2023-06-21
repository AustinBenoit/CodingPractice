#!/usr/bin/python3

import re

SS = re.compile(""".*ss.*""")

given_input = input();

if SS.search(given_input):
    print("hiss")
else:
    print("no hiss")