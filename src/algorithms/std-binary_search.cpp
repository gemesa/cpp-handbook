#include <algorithm>
#include <print>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> symbols = {"_helper", "_init", "_main", "_start"};

  bool hasMain = std::binary_search(symbols.begin(), symbols.end(), "_main");

  std::println("Symbol '_main' exists: {}", hasMain);

  return 0;
}