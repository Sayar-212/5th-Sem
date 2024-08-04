def fibonacci(n):
    if n <= 0:
        return "Input should be a positive integer"
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)
n = int(input("Enter the position of the term you want in the Fibonacci series: "))
nth_term = fibonacci(n)
print(f"The {n}th term in the Fibonacci series is: {nth_term}")
