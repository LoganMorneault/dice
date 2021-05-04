import random as r

num_dice = input("How many dice would you like to roll? ")

sum = 0

for i in range(int(num_dice)):
    num = r.randrange(1,7)
    print(num,)
    sum = sum + num


print("You rolled " + str(sum))