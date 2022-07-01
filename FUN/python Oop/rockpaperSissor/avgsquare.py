import random
sum = 0
for i in range(1000000):
    coordinates = [random.choice(range(1,100000))/100000 for i in range(4)]
    sum +=  ((coordinates[0] - coordinates[1])**2 + (coordinates[2] - coordinates[3])**2)**0.5
print(sum/1000000)
