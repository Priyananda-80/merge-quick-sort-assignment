
# Comparison of Merge Sort and Quick Sort

| Feature | Merge Sort | Standard Quick Sort | Modified Stable Quick Sort |
|---|---|---|---|
| Duplicate values | Handles duplicates | Handles duplicates | Handles duplicates |
| Stability | Stable | Usually unstable | Stable |
| Best time | O(n log n) | O(n log n) | O(n log n) |
| Average time | O(n log n) | O(n log n) | O(n log n) |
| Worst time | O(n log n) | O(n^2) | O(n^2) |
| Auxiliary space | O(n) | O(log n) average | O(n) average; O(n^2) worst for this implementation |
| Preserves equal-weight order | Yes | Not guaranteed | Yes |
| Suitable for this requirement | Very suitable | Requires modification | Suitable |