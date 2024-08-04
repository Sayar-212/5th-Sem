def find_roots(a, b, c):
    d = b**2 - 4*a*c
    sqrt_d = d**0.5 if d >= 0 else (-d)**0.5 * 1j
    root1 = (-b + sqrt_d) / (2*a)
    root2 = (-b - sqrt_d) / (2*a)
    return root1, root2
print("Enter the coefficients of the quadratic equation (ax^2 + bx + c = 0):")
a = float(input("a: "))
b = float(input("b: "))
c = float(input("c: "))
if a == 0:
            print("Coefficient 'a' cannot be zero for a quadratic equation.")
else:
            roots = find_roots(a, b, c)
print(f"The roots of the quadratic equation are: {roots[0]} and {roots[1]}")

