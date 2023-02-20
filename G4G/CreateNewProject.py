import os
import sys

if len(sys.argv) != 2:
    print("USAGE")
    print("python CreateNewProject.py <PROJECT NAME>")
    exit()

if not os.path.exists(sys.argv[1]):
    os.makedirs(sys.argv[1])
    f = open(sys.argv[1] +'/solve.c', 'wb')
    f.close()
    f = open(sys.argv[1] + '/Readme.md', 'wb')
    f.close()