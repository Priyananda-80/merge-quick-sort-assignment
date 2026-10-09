
# Complexity Analysis

## Merge Sort

- Best-case time: O(n log n)
- Average-case time: O(n log n)
- Worst-case time: O(n log n)
- Auxiliary space: O(n)
- Stability: Stable, because equal weights are merged using <=.
- Duplicate values: Handled correctly.

## Standard Quick Sort

- Best-case time: O(n log n)
- Average-case time: O(n log n)
- Worst-case time: O(n^2)
- Auxiliary space: O(log n) on average for recursion, depending on implementation.
- Stability: Not stable in the usual in-place implementation.
- Duplicate values: Handled, but partitioning may affect their original order.

## Modified Stable Quick Sort Used Here

- Best-case time: O(n log n) for balanced partitions.
- Average-case time: O(n log n).
- Worst-case time: O(n^2).
- Auxiliary space: O(n) on average and up to O(n^2) in the worst case with the recursive array implementation.
- Stability: Stable.
- Duplicate values: Equal-weight packages are kept in their original order.

## Comparison Count

The exact number of comparisons depends on the implementation and the input. To report exact counts, add a comparison counter to each program and record the counter after execution. The comparison count should not be guessed from the final sorted output.