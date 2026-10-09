
# Conclusion

Merge Sort and Quick Sort were implemented in C to sort package weights in ascending order.

The original package weights were 20, 15, 20, 10, 15, 20, 25 and 10. Both algorithms produce the sorted sequence 10, 10, 15, 15, 20, 20, 20 and 25.

Package IDs were used to verify stability. The equal-weight packages remain in their original relative order: P4 before P8 for weight 10, P2 before P5 for weight 15, and P1 before P3 before P6 for weight 20.

Merge Sort is stable when implemented correctly and has O(n log n) time complexity in the best, average and worst cases. Standard Quick Sort is generally unstable and has O(n^2) worst-case time complexity.

Therefore, Merge Sort is the recommended algorithm when preserving the original order of packages with equal weights is important. A modified stable Quick Sort can also preserve the order, but the implementation used here requires additional memory.