#!/usr/bin/env python3
"""
Bubble Sort: repeatedly steps through the list, compares adjacent elements
and swaps them if they are in the wrong order.
Time complexity: O(n²)
"""

from typing import List


def bubble_sort(arr: List[int]) -> List[int]:
    """
    Bubble Sort algorithm.
    """
    n = len(arr)
    result = arr.copy()

    for i in range(n):
        for j in range(0, n - i - 1):
            if result[j] > result[j + 1]:
                result[j], result[j + 1] = result[j + 1], result[j]

    return result


if __name__ == "__main__":
    import time

    test_arrays = [
        [64, 34, 25, 12, 22, 11, 90],
        [5, 2, 8, 1, 9],
        list(range(10, 0, -1)),
    ]

    print("Bubble Sort Demonstration")
    print("=" * 50)

    for idx, test_arr in enumerate(test_arrays, 1):
        print(f"\nTest case {idx}:")
        print(f"  Input:  {test_arr}")

        start_time = time.time()
        sorted_arr = bubble_sort(test_arr)
        elapsed = time.time() - start_time

        print(f"  Output: {sorted_arr}")
        print(f"  Time:   {elapsed*1000:.4f}ms")
