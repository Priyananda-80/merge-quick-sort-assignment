
# Trace Table

## Original Input

| Package ID | Weight |
|---|---:|
| P1 | 20 |
| P2 | 15 |
| P3 | 20 |
| P4 | 10 |
| P5 | 15 |
| P6 | 20 |
| P7 | 25 |
| P8 | 10 |

## Merge Sort Trace

| Step | Operation | Resulting groups |
|---|---|---|
| 1 | Split | [20,15,20,10] [15,20,25,10] |
| 2 | Split | [20,15] [20,10] [15,20] [25,10] |
| 3 | Split | [20] [15] [20] [10] [15] [20] [25] [10] |
| 4 | Merge | [15,20] [10,20] [15,20] [10,25] |
| 5 | Merge | [10,15,20,20] [10,15,20,25] |
| 6 | Final merge | [10,10,15,15,20,20,20,25] |

## Stable Quick Sort Trace

The last weight is selected as the pivot at each recursive call.
Partitioning preserves the input order within each group.

| Step | Pivot | Less | Equal | Greater |
|---|---:|---|---|---|
| 1 | 10 | [] | [P4,P8] | [P1,P2,P3,P5,P6,P7] |
| 2 | 25 | [P2,P5,P1,P3,P6] | [P7] | [] |
| 3 | 20 | [P2,P5] | [P1,P3,P6] | [] |
| 4 | 15 | [] | [P2,P5] | [] |

## Final Stable Order

| Package ID | Weight |
|---|---:|
| P4 | 10 |
| P8 | 10 |
| P2 | 15 |
| P5 | 15 |
| P1 | 20 |
| P3 | 20 |
| P6 | 20 |
| P7 | 25 |

Note: The Quick Sort trace shows the major partitions; recursive calls on the smaller groups finish the sorting.