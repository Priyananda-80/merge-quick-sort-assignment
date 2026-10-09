
# Merge Sort and Quick Sort Assignment

## Objective
To implement Merge Sort and Quick Sort in C, sort package weights, examine intermediate steps, verify stability using package IDs, and compare complexity.

## Input Data
Package weights: 20, 15, 20, 10, 15, 20, 25, 10.

Package IDs: P1, P2, P3, P4, P5, P6, P7, P8.

## Files
- merge_sort.c: Stable Merge Sort implementation.
- quick_sort.c: Modified stable Quick Sort implementation.
- input.txt: Input package data.
- output.txt: Expected execution results.
- trace_table.md: Important intermediate steps.
- complexity_analysis.md: Time and space complexity.
- comparison_table.md: Algorithm comparison.
- conclusion.md: Final conclusion.

## How to Compile and Run

Compile Merge Sort:
gcc merge_sort.c -o merge_sort

Run on Linux:
./merge_sort

Compile Quick Sort:
gcc quick_sort.c -o quick_sort

Run on Linux:
./quick_sort

On Windows, run merge_sort.exe and quick_sort.exe after compilation.

## Result
Both programs sort the packages by weight in ascending order while retaining the original order of equal-weight packages.

## Conclusion
Merge Sort is recommended because stability is required and its worst-case time complexity is O(n log n).