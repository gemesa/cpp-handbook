#include <print>
#include <set>
#include <unordered_set>

int main() {
  std::set<uint64_t> visitedAddrs;

  visitedAddrs.insert(0x1000);
  visitedAddrs.insert(0x1100);
  visitedAddrs.insert(0x1000);

  std::println("Visited {} unique addresses.", visitedAddrs.size());

  return 0;
}