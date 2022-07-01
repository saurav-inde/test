import random

objects = ["rock", "paper", "scissor"]
points = [0, 0]

def choose_object(user_choice):
    my_choice = random.choice([0,1,2])
    return my_choice

limit = int(input("Enter the winning point: "))

while True:
    user_choice = int(input("1. Rock 2. Paper 3. Scissor: "))
    my_choice = choose_object(user_choice)
    print(f"You: {objects[user_choice-1]} Me: {objects[my_choice]}")


    if (user_choice-1 == 0 and my_choice == 2) or (user_choice-1 == 1 and my_choice == 0) or (user_choice-1 == 2 and my_choice == 2):
        print("You: +1, Me: 0")
        points[1] += 1

    elif user_choice-1 == my_choice:
        print("Draw")

    else:
        print("You: 0, Me: +1")
        points[0] += 1
  


    print(f"Me:{points[0]} You: {points[1]}\n")

    if points[1] >= limit or points[0] >= limit:
        print(f"you won ") if points[0] < points[1] else print("you loose")
        break