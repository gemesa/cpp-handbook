# `std::string`

## Explanation

Dynamic character array. Similar to `std::vector<char>` but with string-specific operations.

See [`std::string`](https://en.cppreference.com/w/cpp/string/basic_string.html).

Memory: usually heap-allocated, but small strings might be stored inline ([SSO](https://pvs-studio.com/en/blog/terms/6658/)).

Time complexity:

| Operation                         | Complexity                      |
| --------------------------------- | ------------------------------- |
| `[]`, `at`                        | O(1)                            |
| `length()`/`size()`/`empty()`     | O(1)                            |
| `append()`                        | O(k) where k = appended length  |
| `substr()`                        | O(k) where k = substring length |
| `compare()`                       | O(n)                            |

## Code

```cpp
{{#include ../../../src/data-structures/std-string.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/data-structures/std-string.cpp).

## Output

```
$ ./src/data-structures/build/std-string
Contains 'main': true
```
