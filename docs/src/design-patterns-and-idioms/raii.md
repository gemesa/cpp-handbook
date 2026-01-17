# RAII (Resource Acquisition Is Initialization)

## Use case

Automatically release a lock on shared disassembler cache when leaving scope.

## Explanation

RAII ties resource lifetime to object lifetime. Constructor acquires, destructor releases. Guarantees cleanup even on exceptions.

## Code

```cpp
{{#include ../../../src/design-patterns-and-idioms/raii.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/design-patterns-and-idioms/raii.cpp).

## Output

```
$ ./src/design-patterns-and-idioms/build/raii
Cache locked.
Disassembling 0x10001000...
Cache unlocked.
Cache locked.
Disassembling 0x10002000...
Cache unlocked.
```
