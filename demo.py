#!/usr/bin/env python3
"""Demonstration script for 3 sorting algorithms."""

from quick_sort import quick_sort
from merge_sort import merge_sort
from insertion_sort import insertion_sort


def main():
    test_data = [64, 34, 25, 12, 22, 11, 90, 88]

    print("Original array:", test_data)
    print()

    print("Quick Sort result:     ", quick_sort(test_data.copy()))
    print("Merge Sort result:     ", merge_sort(test_data.copy()))
    print("Insertion Sort result: ", insertion_sort(test_data.copy()))


if __name__ == "__main__":
    main()
