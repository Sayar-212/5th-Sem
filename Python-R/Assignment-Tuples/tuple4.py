def avg(tuples):
    return [sum(ele) / len(ele) for ele in zip(*tuples)]
nums = ((1, 1, -5), (30, -15, 56), (81, -60, -39), (-10, 2, 3))
averages = avg(nums)
print(averages)
