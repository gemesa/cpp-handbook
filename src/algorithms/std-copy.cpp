#include <algorithm>
#include <cstdint>
#include <iterator>
#include <print>
#include <string>
#include <vector>

struct Segment {
  std::string segname;
  uint64_t vmaddr;
  uint64_t vmsize;
  // https://www.gnu.org/software/hurd/gnumach-doc/Memory-Attributes.html
  // https://docs.rs/mach2/latest/src/mach2/vm_prot.rs.html#7
  uint32_t initprot;
};

constexpr uint32_t VM_PROT_EXECUTE = 4;

int main() {
  /// https://securelist.com/mac-os-x/36155/
  std::vector<Segment> segments = {{"__PAGEZERO", 0x0, 0x100000000, 0},
                                   {"__TEXT", 0x100000000, 0x4000, 5},
                                   {"__DATA", 0x100004000, 0x4000, 3},
                                   {"_LINKEDIT", 0x100008000, 0x1000, 1}};

  std::vector<Segment> executableSegments;

  std::copy_if(
      segments.begin(), segments.end(), std::back_inserter(executableSegments),
      [](const Segment &seg) { return (seg.initprot & VM_PROT_EXECUTE) != 0; });

  for (const auto &seg : executableSegments) {
    std::println("{} (vmaddr: {:#x}, vmsize: {:#x})", seg.segname, seg.vmaddr,
                 seg.vmsize);
  }

  return 0;
}