def analyze_numbers(numbers):
    total_sum = odd_sum = even_sum = odd_count = even_count = 0
    odd_numbers = []
    even_numbers = []
    for num in numbers:
        total_sum += num
        if num % 2 == 0:
            even_sum += num
            even_count += 1
            even_numbers.append(num)
        else:
            odd_sum += num
            odd_count += 1
            odd_numbers.append(num)
    return [
        total_sum,       
        odd_sum,         
        even_sum,        
        odd_count,       
        even_count,      
        even_numbers,   
        odd_numbers      
    ]
n = int(input("Enter number of numbers you want in a list"))
numbers = []
for i in range (0,n):
           x = int(input())
           numbers.append(x)
print(analyze_numbers(numbers))
