#!/usr/bin/env python3

from typing import List


def merge_sort(arr: List[int]) -> List[int]:
    if len(arr) <= 1:
        return arr

    mid = len(arr) // 2
    left = merge_sort(arr[:mid])
    right = merge_sort(arr[mid:])

    return _merge(left, right)


def _merge(left: List[int], right: List[int]) -> List[int]:
    result = []
    i = j = 0

    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1

    result.extend(left[i:])
    result.extend(right[j:])

    return result


if __name__ == "__main__":
    import time

    test_arrays = [
        [64, 34, 25, 12, 22, 11, 90],
        [5, 2, 8, 1, 9],
        list(range(10, 0, -1)),
    ]

    print("Merge Sort Demonstration")
    print("=" * 50)

    for idx, test_arr in enumerate(test_arrays, 1):
        print(f"\nTest case {idx}:")
        print(f"  Input:  {test_arr}")

        start_time = time.time()
        sorted_arr = merge_sort(test_arr)
        elapsed = time.time() - start_time

        print(f"  Output: {sorted_arr}")
        print(f"  Time:   {elapsed*1000:.4f}ms")
