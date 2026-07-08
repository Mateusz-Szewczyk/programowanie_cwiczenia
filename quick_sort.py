#!/usr/bin/env python3
"""Quick Sort implementation."""


def quick_sort(arr):
    """Sort using Quick Sort algorithm (divide and conquer)."""
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)


if __name__ == "__main__":
    test_data = [64, 34, 25, 12, 22, 11, 90, 88]
    print(f"Original: {test_data}")
    print(f"Sorted:   {quick_sort(test_data)}")
