from cmath import cos
import random
sum = 0
for i in range(1000000):
    radii_vector = [random.choice(range(0,100000))/100000 for i in range(2)]
    cos_theta = cos(random.choice(range(0,36000000))/100000).real
    sum += ((radii_vector[0])**2 + (radii_vector[1])**2 + 2*(radii_vector[0])*(radii_vector[1])*cos_theta)**0.5
print(sum/1000000)