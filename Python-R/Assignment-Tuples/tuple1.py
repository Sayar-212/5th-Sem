def tuple1(check):
            colors = (('Red', 'White', 'Blue'),('Green', 'Pink', 'Purple'),('Orange', 'Yellow', 'Lime'),)
            for i in colors:
                        if check in i :
                                    return "Colour Present"
                        else:
                                    return "Colour Not Present"
check = input("Enter Colour : ")
print(tuple1(check))
