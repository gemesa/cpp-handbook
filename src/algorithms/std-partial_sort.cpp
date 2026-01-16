#include <algorithm>
#include <cstdint>
#include <print>
#include <string>
#include <vector>

struct Function {
  std::string name;
  uint64_t size;
};

int main() {
  std::vector<Function> functions = {{"_main", 256},    {"_helper", 56},
                                     {"_init", 32},     {"_process", 1024},
                                     {"_cleanup", 128}, {"_validate", 512},
                                     {"_parse", 2048}};

  std::partial_sort(
      functions.begin(), functions.begin() + 3, functions.end(),
      [](const Function &a, const Function &b) { return a.size > b.size; });

  std::println("Top 3 largest functions:");
  for (size_t i = 0; i < 3; ++i) {
    std::println("{}: {}", functions[i].name, functions[i].size);
  }

  return 0;
}