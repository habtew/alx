#!/usr/bin/python3
import sys
argv = sys.argv[1:]

if len(argv) == 0:
    print(f"{0}");
else:
    sum = 0
    for i in argv:
        sum += int(i)
    print(f"{sum}")

