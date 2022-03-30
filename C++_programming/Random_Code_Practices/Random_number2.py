import random

list1 = [1, 2, 3, 4, 5]

print("A random number from a list:- ")
print("Serial ------ Random Number")
print("---------------------------")
for x in range(100):
    print((x+1), "     -->     ", random.choice(list1))