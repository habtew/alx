#!/usr/bin/python3
import sys
argv = sys.argv
argc = len(argv)
if argc == 1:
    print(f"{argc - 1} arguments.")
for item in argv:
    print(item)
