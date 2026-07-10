#!/usr/bin/env python3
"""
Quick Sort: divide-and-conquer algorithm that partitions the list around
a pivot element and recursively sorts the partitions.
Time complexity: O(n log n) average, O(n²) worst case
"""

from typing import List


def quick_sort(arr: List[int]) -> List[int]:
    """
    Quick Sort algorithm.
    """
    if len(arr) <= 1:
        return arr

    pivot = arr[0]
    left = [x for x in arr[1:] if x <= pivot]
    right = [x for x in arr[1:] if x > pivot]

    return quick_sort(left) + [pivot] + quick_sort(right)


if __name__ == "__main__":
    import time

    test_arrays = [
        [64, 34, 25, 12, 22, 11, 90],
        [5, 2, 8, 1, 9],
        list(range(10, 0, -1)),
    ]

    print("Quick Sort Demonstration")
    print("=" * 50)

    for idx, test_arr in enumerate(test_arrays, 1):
        print(f"\nTest case {idx}:")
        print(f"  Input:  {test_arr}")

        start_time = time.time()
        sorted_arr = quick_sort(test_arr)
        elapsed = time.time() - start_time

        print(f"  Output: {sorted_arr}")
        print(f"  Time:   {elapsed*1000:.4f}ms")
