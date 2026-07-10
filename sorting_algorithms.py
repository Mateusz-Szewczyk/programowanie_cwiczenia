#!/usr/bin/env python3
"""
Demonstration of 3 sorting algorithms:
1. Bubble Sort - O(n²) time complexity
2. Merge Sort - O(n log n) time complexity
3. Quick Sort - O(n log n) average time complexity
"""

import time
from typing import List


def bubble_sort(arr: List[int]) -> List[int]:
    """
    Bubble Sort: repeatedly steps through the list, compares adjacent elements
    and swaps them if they are in the wrong order.
    """
    n = len(arr)
    result = arr.copy()

    for i in range(n):
        for j in range(0, n - i - 1):
            if result[j] > result[j + 1]:
                result[j], result[j + 1] = result[j + 1], result[j]

    return result


def merge_sort(arr: List[int]) -> List[int]:
    """
    Merge Sort: divide-and-conquer algorithm that divides the list into halves,
    recursively sorts them, and merges them back together.
    """
    if len(arr) <= 1:
        return arr

    mid = len(arr) // 2
    left = merge_sort(arr[:mid])
    right = merge_sort(arr[mid:])

    return _merge(left, right)


def _merge(left: List[int], right: List[int]) -> List[int]:
    """Helper function to merge two sorted lists."""
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


def quick_sort(arr: List[int]) -> List[int]:
    """
    Quick Sort: divide-and-conquer algorithm that partitions the list around
    a pivot element and recursively sorts the partitions.
    """
    if len(arr) <= 1:
        return arr

    pivot = arr[0]
    left = [x for x in arr[1:] if x <= pivot]
    right = [x for x in arr[1:] if x > pivot]

    return quick_sort(left) + [pivot] + quick_sort(right)


def demonstrate_sorting():
    """Demonstrate all three sorting algorithms."""

    test_arrays = [
        [64, 34, 25, 12, 22, 11, 90],
        [5, 2, 8, 1, 9],
        list(range(10, 0, -1)),
    ]

    algorithms = [
        ("Bubble Sort", bubble_sort),
        ("Merge Sort", merge_sort),
        ("Quick Sort", quick_sort),
    ]

    for algo_name, algo_func in algorithms:
        print(f"\n{'='*50}")
        print(f"Algorithm: {algo_name}")
        print(f"{'='*50}")

        for idx, test_arr in enumerate(test_arrays, 1):
            print(f"\nTest case {idx}:")
            print(f"  Input:  {test_arr}")

            start_time = time.time()
            sorted_arr = algo_func(test_arr)
            elapsed = time.time() - start_time

            print(f"  Output: {sorted_arr}")
            print(f"  Time:   {elapsed*1000:.4f}ms")


def benchmark_algorithms():
    """Performance comparison of the three algorithms."""
    import random

    sizes = [100, 500, 1000]
    algorithms = [
        ("Bubble Sort", bubble_sort),
        ("Merge Sort", merge_sort),
        ("Quick Sort", quick_sort),
    ]

    print(f"\n{'='*70}")
    print("Performance Benchmark (10 runs average)")
    print(f"{'='*70}\n")

    for size in sizes:
        print(f"Array size: {size}")
        print("-" * 70)

        for algo_name, algo_func in algorithms:
            test_arr = [random.randint(1, 1000) for _ in range(size)]

            times = []
            for _ in range(10):
                start = time.time()
                algo_func(test_arr)
                times.append(time.time() - start)

            avg_time = sum(times) / len(times)
            print(f"  {algo_name:15} {avg_time*1000:8.4f}ms")

        print()


if __name__ == "__main__":
    print("Sorting Algorithms Demonstration")

    demonstrate_sorting()
    benchmark_algorithms()
