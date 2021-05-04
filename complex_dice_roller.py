import random as r

# prints instructions and takes user input
print("Input formatted as NdN, with constants being Nd1")
input_string = input("What would you like to roll? ") # I learned in Python2, so I would have used raw_input there

# preps for loop
input_arr = input_string.split()
sum = 0

for x in input_arr:
    nums = x.split('d') # splits on d; 5d6 becomes [5,6]

    for y in range(int(nums[0])): # first num is the number of rolls on this die
        roll = r.randrange(int(nums[1])) + 1 # second num is the size of the die
        sum = sum + roll
        print(roll)

print("Total: " + str(sum)) # returns