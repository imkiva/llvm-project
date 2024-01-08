// RUN: %clang_cc1 -triple riscv64 -target-feature +xtheadvector \
// RUN:   -disable-O0-optnone -emit-llvm %s -o - | \
// RUN:   opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

// CHECK-RV64-LABEL: define dso_local void @test_th_vse16_v_f16m1
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], <vscale x 4 x half> [[VALUE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.th.vse.nxv4f16.i64(<vscale x 4 x half> [[VALUE]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_th_vse16_v_f16m1(_Float16 *base, vfloat16m1_t value, size_t vl) {
  return __riscv_vse16_v_f16m1(base, value, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_th_vse16_v_f16m2
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], <vscale x 8 x half> [[VALUE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.th.vse.nxv8f16.i64(<vscale x 8 x half> [[VALUE]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_th_vse16_v_f16m2(_Float16 *base, vfloat16m2_t value, size_t vl) {
  return __riscv_vse16_v_f16m2(base, value, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_th_vse16_v_f16m4
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], <vscale x 16 x half> [[VALUE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.th.vse.nxv16f16.i64(<vscale x 16 x half> [[VALUE]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_th_vse16_v_f16m4(_Float16 *base, vfloat16m4_t value, size_t vl) {
  return __riscv_vse16_v_f16m4(base, value, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_th_vse16_v_f16m8
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], <vscale x 32 x half> [[VALUE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.th.vse.nxv32f16.i64(<vscale x 32 x half> [[VALUE]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_th_vse16_v_f16m8(_Float16 *base, vfloat16m8_t value, size_t vl) {
  return __riscv_vse16_v_f16m8(base, value, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_th_vse16_v_i16m1
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], <vscale x 4 x i16> [[VALUE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.th.vse.nxv4i16.i64(<vscale x 4 x i16> [[VALUE]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_th_vse16_v_i16m1(int16_t *base, vint16m1_t value, size_t vl) {
  return __riscv_vse16_v_i16m1(base, value, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_th_vse16_v_i16m2
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], <vscale x 8 x i16> [[VALUE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.th.vse.nxv8i16.i64(<vscale x 8 x i16> [[VALUE]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_th_vse16_v_i16m2(int16_t *base, vint16m2_t value, size_t vl) {
  return __riscv_vse16_v_i16m2(base, value, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_th_vse16_v_i16m4
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], <vscale x 16 x i16> [[VALUE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.th.vse.nxv16i16.i64(<vscale x 16 x i16> [[VALUE]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_th_vse16_v_i16m4(int16_t *base, vint16m4_t value, size_t vl) {
  return __riscv_vse16_v_i16m4(base, value, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_th_vse16_v_i16m8
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], <vscale x 32 x i16> [[VALUE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.th.vse.nxv32i16.i64(<vscale x 32 x i16> [[VALUE]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_th_vse16_v_i16m8(int16_t *base, vint16m8_t value, size_t vl) {
  return __riscv_vse16_v_i16m8(base, value, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_th_vse16_v_u16m1
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], <vscale x 4 x i16> [[VALUE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.th.vse.nxv4i16.i64(<vscale x 4 x i16> [[VALUE]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_th_vse16_v_u16m1(uint16_t *base, vuint16m1_t value, size_t vl) {
  return __riscv_vse16_v_u16m1(base, value, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_th_vse16_v_u16m2
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], <vscale x 8 x i16> [[VALUE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.th.vse.nxv8i16.i64(<vscale x 8 x i16> [[VALUE]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_th_vse16_v_u16m2(uint16_t *base, vuint16m2_t value, size_t vl) {
  return __riscv_vse16_v_u16m2(base, value, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_th_vse16_v_u16m4
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], <vscale x 16 x i16> [[VALUE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.th.vse.nxv16i16.i64(<vscale x 16 x i16> [[VALUE]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_th_vse16_v_u16m4(uint16_t *base, vuint16m4_t value, size_t vl) {
  return __riscv_vse16_v_u16m4(base, value, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_th_vse16_v_u16m8
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], <vscale x 32 x i16> [[VALUE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.th.vse.nxv32i16.i64(<vscale x 32 x i16> [[VALUE]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_th_vse16_v_u16m8(uint16_t *base, vuint16m8_t value, size_t vl) {
  return __riscv_vse16_v_u16m8(base, value, vl);
}
