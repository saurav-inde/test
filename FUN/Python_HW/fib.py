
def fib(n):
    return (n if n < 2 else fib(n-1) + fib(n-2))



print(fib(int(input("Enter the n to get nth fibbonachi number: "))))