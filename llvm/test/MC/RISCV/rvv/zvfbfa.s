# RUN: llvm-mc -triple=riscv64 -show-encoding --mattr=+zvfbfa,+f %s \
# RUN:        | FileCheck %s --check-prefixes=CHECK-ENCODING,CHECK-INST
# RUN: llvm-mc -triple=riscv32 -show-encoding --mattr=+zvfbfa,+f %s \
# RUN:        | FileCheck %s --check-prefixes=CHECK-ENCODING,CHECK-INST
# RUN: llvm-mc -triple=riscv64 -show-encoding --mattr=+zvfbfa,+f %s 2>&1 \
# RUN:        | FileCheck %s --check-prefixes=CHECK-WARNING
# RUN: llvm-mc -triple=riscv32 -show-encoding --mattr=+zvfbfa,+f %s 2>&1 \
# RUN:        | FileCheck %s --check-prefixes=CHECK-WARNING
# RUN: not llvm-mc -triple riscv32 -mattr=+v,+f < %s 2>&1 \
# RUN:        | FileCheck %s --check-prefix=CHECK-ERROR
# RUN: not llvm-mc -triple riscv64 -mattr=+v,+f < %s 2>&1 \
# RUN:        | FileCheck %s --check-prefix=CHECK-ERROR
# RUN: llvm-mc -triple=riscv64 -filetype=obj --mattr=+zvfbfa,+f %s \
# RUN:        | llvm-objdump -d --mattr=+zvfbfa,+f --no-print-imm-hex - \
# RUN:        | FileCheck %s --check-prefix=CHECK-INST
# RUN: llvm-mc -triple=riscv64 -filetype=obj --mattr=+zvfbfa,+f %s \
# RUN:        | llvm-objdump -d - \
# RUN:        | FileCheck %s --check-prefix=CHECK-UNKNOWN

# CHECK-INST: vsetvli a0, a1, 456
# CHECK-ENCODING: [0x57,0xf5,0x85,0x1c]
# CHECK-ERROR: error: vtype encoding with altfmt == 1 requires the 'Zvfbfa' extension{{$}}
# CHECK-UNKNOWN: 1c85f557 <unknown>
vsetvli a0, a1, e16alt, m1, ta, ma

# CHECK-WARNING: warning: use of vtype encodings with SEW >= 32 and altfmt == 1 is reserved{{$}}
# CHECK-INST: vsetvli a0, a1, 464
# CHECK-ENCODING: [0x57,0xf5,0x05,0x1d]
# CHECK-UNKNOWN: 1d05f557 <unknown>
vsetvli a0, a1, e32alt, m1, ta, ma

# CHECK-WARNING: warning: use of vtype encodings with SEW >= 32 and altfmt == 1 is reserved{{$}}
# CHECK-INST: vsetvli a0, a1, 472
# CHECK-ENCODING: [0x57,0xf5,0x85,0x1d]
# CHECK-UNKNOWN: 1d85f557 <unknown>
vsetvli a0, a1, e64alt, m1, ta, ma
