# `std::flat_map`

## Explanation

Sorted key-value pairs stored in contiguous memory (two vectors internally).

See [`std::flat_map`](https://en.cppreference.com/w/cpp/container/flat_map.html).

Memory: two `std::vector`s, one for keys, one for value. Cache-friendly.

Time complexity:

| Operation                         | Complexity                 |
| --------------------------------- | -------------------------- |
| `find()`, `count()`, `contains()` | O(log n)                   |
| `[]`, `at`                        | O(log n)                   |
| `insert()`/`emplace()`            | O(n) (must shift elements) |
| `erase()`                         | O(n) (must shift elements) |

## Use case

- Read-heavy workloads.
- Need sorted iteration with better cache performance than `std::map`.

## Code

```cpp
{{#include ../../../src/data-structures/std-flat_map.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/data-structures/std-flat_map.cpp).

## Output

```
$ ./src/data-structures/build/std-flat_map
0x10001000: _main
0x10002000: _helper
0x10003000: _init
```
