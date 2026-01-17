# `std::set`/`std::unordered_set`

## Explanation

Like `map`/`unordered_map` but stores only keys.

See [`std::set`](https://en.cppreference.com/w/cpp/container/set.html) and [`std::unordered_set`](https://en.cppreference.com/w/cpp/container/unordered_set.html).

Time complexity:

| Operation                         | `std::set`                 | `std::unordered_set` |
| --------------------------------- | -------------------------- | -------------------- |
| `find()`, `count()`, `contains()` | O(log n)                   | O(1) avg, O(n) worst |
| `insert()`/`emplace()`            | O(log n)                   | O(1) avg, O(n) worst |
| `erase()`                         | O(log n)                   | O(1) avg, O(n) worst |

## Use case

- Deduplication.

## Code

```cpp
{{#include ../../../src/data-structures/std-set-std-unordered_set.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/data-structures/std-set-std-unordered_set.cpp).

## Output

```
$ ./src/data-structures/build/std-set-std-unordered_set
Visited 2 unique addresses.
```
