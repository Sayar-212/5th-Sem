def swap_first_last_tuple(lst):
    if len(lst) > 1:
        lst[0], lst[-1] = lst[-1], lst[0]
    return lst
def swap_first_last_temp(lst):
    if len(lst) > 1:
        temp = lst[0]
        lst[0] = lst[-1]
        lst[-1] = temp
    return lst
def swap_first_last_indexing(lst):
    if len(lst) > 1:
        lst[0], lst[-1] = lst[-1], lst[0]
    return lst
def swap_first_last_slicing(lst):
    if len(lst) > 1:
        lst = [lst[-1]] + lst[1:-1] + [lst[0]]
    return lst
lst = [1, 2, 3, 4, 5] #make user input
lst_tuple = lst[:]
print("Using Tuple Unpacking:", swap_first_last_tuple(lst_tuple))
lst_temp = lst[:]
print("Using Temporary Variable:", swap_first_last_temp(lst_temp))
lst_indexing = lst[:]
print("Using List Indexing:", swap_first_last_indexing(lst_indexing))
lst_slicing = lst[:]
print("Using Slicing:", swap_first_last_slicing(lst_slicing))
