def isPalin(data):
            copy = data
            if not data.isdecimal():
                        copy = ''.join(ch.lower() for ch in data if ch.isalnum())
            print( copy == copy[::-1])
print("Enter Sentences : ")
while(True):
            data = input()
            if not data:
                        break;
            isPalin(data)
