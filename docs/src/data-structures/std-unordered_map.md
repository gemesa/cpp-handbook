# `std::unordered_map`

## Explanation

Hash table.

See [`std::unordered_map`](https://en.cppreference.com/w/cpp/container/unordered_map.html).

Memory: array of buckets (each bucket is a linked list of entries). Can use more memory than `std::map` due to bucket overhead.

Time complexity:

| Operation                         | Complexity     |
| --------------------------------- | -------------- |
| `find()`, `count()`, `contains()` | O(1)           |
| `[]`, `at`                        | O(1)           |
| `insert()`/`emplace()`            | O(1)           |
| `erase()`                         | O(1)  (by key) |

Worst case is O(n) for every operation. It occurs with many hash collisions (all keys hash to same bucket).

## Use case

- Fast lookup is priority.
- Do not need sorted iteration.
- Large number of elements.

## Code

```cpp
{{#include ../../../src/data-structures/std-unordered_map.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/data-structures/std-unordered_map.cpp).

## Output

```
$ ./src/data-structures/build/std-unordered_map
_main is at: 0x10001000
```
