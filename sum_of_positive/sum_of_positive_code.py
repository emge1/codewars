def positive_sum(arr):
    return sum([0 if x < 0 else x for x in arr])
