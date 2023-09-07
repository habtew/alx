#!/usr/bin/python3
import sys
argv = sys.argv
argc = len(argv)
if argc == 1:
    print(f"{argc - 1} arguments.")
else:
    print(f"{argc - 1} arguments.")
    for index,item in enumerate(argv[1:]):
        print(index + 1, item)
