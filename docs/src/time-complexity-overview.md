# Time complexity overview

Time complexity describes how an algorithm's runtime grows relative to input size (`n`). These are worst-case bounds (you might get lucky and find an element on the first try, but we plan for the worst).

| Notation   | Name         | Meaning                                | Example                       |
| ---------- | ------------ | -------------------------------------- | ----------------------------- |
| O(1)       | Constant     | Same time regardless of input size.    | Array index access.           |
| O(log n)   | Logarithmic  | Halves problem each step.              | Binary search.                |
| O(n)       | Linear       | Touches each element once.             | Finding max in unsorted list. |
| O(n log n) | Linearithmic | Divide in half repeatedly, touch all elements each level. | Merge sort. |
| O(n^2)     | Quadratic    | Nested loops.                          | Bubble sort. |

For 1,000,000 elements (worst case):
- O(1): 1 operation
- O(log n): log2 1,000,000 ~= 19.93 -> 20 operations
- O(n): 1,000,000 operations
- O(n log n): 1,000,000 * log2 1,000,000 ~= 1,000,000 * 19.93 -> 20,000,000 operations
- O(n^2): 1,000,000 * 1,000,000 operations

## Merge sort

Steps:
- Split the array in half repeatedly, until we have single elements.
- Merge them back together in sorted order.

Example:

```
[2,3,1,4]
1. split
[2,3] [1,4]
2. split
[2][3] [1][4] // single elements, log n splits to get here (log 4 = 2)
1. merge
[2,3] [1,4] // 2 comparisons
2. merge
[1,2,3,4] // n-1 (3) comparisons
```

Total: <n * log2 n -> n * log2 n

Big O is about scaling so we can ignore the < sign.

## Bubble sort

Repeatedly walk through, swap adjacent pairs if out of order. Largest element "bubbles" to the end each pass.

```
[4,3,2,1]
1. pass // n - 1 comparisons
[3,2,1,4]
2. pass // n - 2 comparisons
[2,1,3,4]
3. pass // n - 3 comparisons
[1,2,3,4]
```

The number of comparisons is decreasing after each pass, because we know that the largest elements are being moved to the end.

To summarize:

```
pass 1: n - 1 comparisons
pass 2: n - 2 comparisons
pass n-1: 1 comparison
```

Total: (n-1) + (n-2) + ... + 1
Or written the other way: 1 + 2 + ... + (n-1)

Doubling trick so we can simplify it:

```
    1   +   2   + ... + (n-1)
+ (n-1) + (n-2) + ... +   1
-----------------------------
    n   +   n   + ... +   n
```

Each column sums to n. How many columns? There are (n-1) numbers.

So we get n*(n-1) but we need to divide it by 2 (to undo the doubling): n*(n-1)/2 = (n^2-n)/2 -> O(n^2)

Big O is about scaling so it ignores 2 and -n.
