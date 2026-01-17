#include <algorithm>
#include <iterator>
#include <print>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> binaryA = {"_main", "_helper", "_cleanup",
                                      "_old_func"};
  std::vector<std::string> binaryB = {"_main", "_helper", "_cleanup",
                                      "_new_func"};

  std::vector<std::string> common, onlyA, onlyB;

  std::set_intersection(binaryA.begin(), binaryA.end(), binaryB.begin(),
                        binaryB.end(), std::back_inserter(common));

  std::set_difference(binaryA.begin(), binaryA.end(), binaryB.begin(),
                      binaryB.end(), std::back_inserter(onlyA));

  std::set_difference(binaryB.begin(), binaryB.end(), binaryA.begin(),
                      binaryA.end(), std::back_inserter(onlyB));

  std::println("Common:");
  for (const auto &sym : common) {
    std::print("{} ", sym);
  }
  std::println("");

  std::println("Only A:");
  for (const auto &sym : onlyA) {
    std::print("{} ", sym);
  }
  std::println("");

  std::println("Only B:");
  for (const auto &sym : onlyB) {
    std::print("{} ", sym);
  }
  std::println("");

  return 0;
}