import random as rand



# Generating n and the random list based off n
n = rand.randint(1,100)
random_list = [i+1 for i in range(n)]	
random_list.pop(rand.randint(0,n-1))
rand.shuffle(random_list)


# Using the summation from 1 to n
summation = 0
for i in range(len(random_list)):
	summation += random_list[i]

print(f"The missing number is {int(n*(n+1)/2-summation)}!")
random_list.sort()
print(random_list)







