#!/usr/bin/env python3
"""Insertion Sort implementation."""


def insertion_sort(arr):
    """Sort using Insertion Sort algorithm."""
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr


if __name__ == "__main__":
    test_data = [64, 34, 25, 12, 22, 11, 90, 88]
    print(f"Original: {test_data}")
    print(f"Sorted:   {insertion_sort(test_data.copy())}")
