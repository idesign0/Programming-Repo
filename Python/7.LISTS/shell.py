Python 3.7.2rc1 (tags/v3.7.2rc1:75a402a217, Dec 11 2018, 23:05:39) [MSC v.1916 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> numbers = [20,54,869,75,15,31]
>>> numbers
[20, 54, 869, 75, 15, 31]
>>> numbers[2]
869
>>> numbers[2]=25
>>> numbers
[20, 54, 25, 75, 15, 31]
>>> numbers + [90,55,25]
[20, 54, 25, 75, 15, 31, 90, 55, 25]
>>> numbers
[20, 54, 25, 75, 15, 31]
>>> numbers.append(120)
>>> numbers
[20, 54, 25, 75, 15, 31, 120]
>>> numbers[:2]
[20, 54]
>>> numbers[:2]=[0,0]
>>> numbers
[0, 0, 25, 75, 15, 31, 120]
>>> numbers[:2]=[]
>>> numbers
[25, 75, 15, 31, 120]
>>> numbers[:]=[]
>>> numbers
[]
>>> 
