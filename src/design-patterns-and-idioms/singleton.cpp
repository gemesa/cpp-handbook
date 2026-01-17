#include <cstdint>
#include <print>
#include <string>
#include <unordered_map>

class SymbolTable {
public:
  static SymbolTable &instance() {
    static SymbolTable table;
    return table;
  }

  void add(uint64_t addr, const std::string &name) {
    symbols_.emplace(addr, name);
  }

  std::string lookup(uint64_t addr) const {
    auto it = symbols_.find(addr);
    if (it != symbols_.end()) {
      return it->second;
    } else {
      return std::format("sub_{:#x}", addr);
    }
  }

private:
  SymbolTable() { std::println("Symbol table created."); }
  std::unordered_map<uint64_t, std::string> symbols_;
};

int main() {
  SymbolTable::instance().add(0x10001000, "_main");
  SymbolTable::instance().add(0x10002000, "_decrypt");

  std::println("call {}", SymbolTable::instance().lookup(0x10001000));
  std::println("call {}", SymbolTable::instance().lookup(0x10002000));
  std::println("call {}", SymbolTable::instance().lookup(0x10003000));

  return 0;
}