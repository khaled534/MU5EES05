def min_value(arr):
    """Returns the minimum value in the array."""
    if len(arr) == 0:
        return None
    min_val = arr[0]
    for val in arr:
        if val < min_val:
            min_val = val
    return min_val
