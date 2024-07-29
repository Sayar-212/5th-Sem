"""
    Write a program to validate if a given password
    It is valid if:
    1. The length is >= 8 and <= 14
    2. There must be at least one lowercase and One uppercase character
    3. There must be at least one special case and one digit
"""

def validatePassword(password):
    len_pass = len(password)
    if not len_pass >= 8 and len_pass <= 14:
        print("Password length must be  >= 8 and <= 14")
        return
    upper, lower, spChar, digits = 0, 0, 0, 0
    for ch in password:
        upper += ch.isupper()
        lower += ch.islower()
        spChar += not ch.isalnum();
        digits += ch.isdigit()

    if not upper:
        print("Password must have at least one Upper Case character")
        return
    if not lower:
        print("Password must have at least one lower Case character")
        return
    if not spChar:
        print("Password must have at least one special character")
        return
    if not digits:
        print("Password must have at least one digit")
        return

        # password is valid
    print("Password is valid")

    # Driver code [Must Include]
while True:
    password = input("Enter your password: ")
    if not password:
        print("EXITING....")
        break
    validatePassword(password)
