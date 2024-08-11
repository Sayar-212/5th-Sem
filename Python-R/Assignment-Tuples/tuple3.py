def remove_elements_from_tuple(t):
    result_tuple = t[:1] + t[2:-1]
    print("Original tuple:", t)
    print("ID of original tuple:", id(t))
    print("Resultant tuple after removing 2nd and last elements:", result_tuple)
    print("ID of resultant tuple:", id(result_tuple))
tuple1 = (2, 7, [5, 7, 8], 'Tutor', True, 'T', 3.21)
remove_elements_from_tuple(tuple1)
