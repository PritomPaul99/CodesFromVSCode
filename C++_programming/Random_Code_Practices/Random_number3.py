import random

string1 = "I am Pritom"

print("Print a random character from a stering:-")
print("Serial ------- Random Character")
print("-------------------------------")
for x in range(100):
    print(x + 1, "-----------", random.choice(string1))
