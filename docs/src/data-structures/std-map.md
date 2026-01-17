# `std::map`

## Explanation

Sorted key-value pairs. Implemented as red-black tree (self-balancing BST).

See [`std::map`](https://en.cppreference.com/w/cpp/container/map.html).

Memory: each entry in its own tree node (key + value + 3 pointers + color bit). The 3 pointers are: left child pointer, right child pointer, parent pointer. High overhead.

Time complexity:

| Operation                         | Complexity                    |
| --------------------------------- | ----------------------------- |
| `find()`, `count()`, `contains()` | O(log n)                      |
| `[]`, `at`                        | O(log n)                      |
| `insert()`/`emplace()`            | O(log n)                      |
| `erase()`                         | O(log n)  (by key)            |
| `erase()`                         | O(1) (by iterator, amortized) |

"By iterator" means we already have an iterator to the position where we want to erase.

Amortized means it is not truly constant. Rebalancing might be triggered.

## Use case

- Need sorted iteration by key.
- Moderate number of elements.

## Code

```cpp
{{#include ../../../src/data-structures/std-map.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/data-structures/std-map.cpp).

## Output

```
$ ./src/data-structures/build/std-map
Symbols (sorted by address):
0x10001000: _main
0x10002000: _helper
0x10003000: _init
```
