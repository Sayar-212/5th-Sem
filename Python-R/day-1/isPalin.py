def  isPalindrome(data):
    new_data = data
    if not data.isdecimal():
        # this is a sentence
        data = data.lower()
        new_data = ""
        for ch in data:
            if ch.isalnum():
                new_data += ch
    return new_data == new_data[::-1]
while True:
    data = input("Enter number or some sentence: ")
    if not data:
        print("EXITING....")
        break
    print(isPalindrome(data))
