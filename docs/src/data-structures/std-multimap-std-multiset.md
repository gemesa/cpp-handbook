# `std::multimap`/`std::multiset`

## Explanation

Like `map`/`set` but allows duplicate keys.

See [`std::multimap`](https://en.cppreference.com/w/cpp/container/multimap.html) and [`std::multiset`](https://en.cppreference.com/w/cpp/container/multiset.html).

Time complexity: same as `std::map`/`std::set`.

| Operation                         | Complexity                                  |
| --------------------------------- | ------------------------------------------- |
| `find()`, `count()`, `contains()` | O(log n)                                    |
| `insert()`/`emplace()`            | O(log n)                                    |
| `erase()` by key                  | O(log n + k) where k = num of matching keys |

## Use case

- Multiple values per key, grouping related items.

## Code

```cpp
{{#include ../../../src/data-structures/std-multimap-std-multiset.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/data-structures/std-multimap-std-multiset.cpp).

## Output

```
$ ./src/data-structures/build/std-multimap-std-multiset
Symbols at 0x10001000:
_main
main
```
