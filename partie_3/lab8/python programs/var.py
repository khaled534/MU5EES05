def variance(arr):
    """Calculates the variance of the array."""
    if len(arr) == 0:
        return None
    mean = sum(arr) / len(arr)
    var = sum((x - mean) ** 2 for x in arr) / len(arr)
    return var
