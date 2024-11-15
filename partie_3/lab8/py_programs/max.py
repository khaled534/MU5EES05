def max_value(arr):
    """Returns the maximum value in the array."""
    if len(arr) == 0:
        return None
    max_val = arr[0]
    for val in arr:
        if val > max_val:
            max_val = val
    return max_val
