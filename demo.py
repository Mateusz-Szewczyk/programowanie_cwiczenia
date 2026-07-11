#!/usr/bin/env python3

import time
import random
from bubble_sort import bubble_sort
from merge_sort import merge_sort
from quick_sort import quick_sort


def demonstrate_sorting():

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
