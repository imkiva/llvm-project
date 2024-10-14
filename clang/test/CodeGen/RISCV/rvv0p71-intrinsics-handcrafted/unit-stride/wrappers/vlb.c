// RUN: %clang_cc1 -triple riscv64 -target-feature +xtheadvector \
// RUN:   -disable-O0-optnone -emit-llvm %s -o - | \
// RUN:   opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x i8> @test_th_vlb_v_i8m1
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i8> @llvm.riscv.th.vlb.nxv8i8.i64(<vscale x 8 x i8> poison, ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i8> [[TMP0]]
//
vint8m1_t test_th_vlb_v_i8m1(const int8_t *base, size_t vl) {
  return __riscv_vlb_v_i8m1(base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x i8> @test_th_vlb_v_i8m2
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i8> @llvm.riscv.th.vlb.nxv16i8.i64(<vscale x 16 x i8> poison, ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x i8> [[TMP0]]
//
vint8m2_t test_th_vlb_v_i8m2(const int8_t *base, size_t vl) {
  return __riscv_vlb_v_i8m2(base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 32 x i8> @test_th_vlb_v_i8m4
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x i8> @llvm.riscv.th.vlb.nxv32i8.i64(<vscale x 32 x i8> poison, ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x i8> [[TMP0]]
//
vint8m4_t test_th_vlb_v_i8m4(const int8_t *base, size_t vl) {
  return __riscv_vlb_v_i8m4(base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 64 x i8> @test_th_vlb_v_i8m8
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 64 x i8> @llvm.riscv.th.vlb.nxv64i8.i64(<vscale x 64 x i8> poison, ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 64 x i8> [[TMP0]]
//
vint8m8_t test_th_vlb_v_i8m8(const int8_t *base, size_t vl) {
  return __riscv_vlb_v_i8m8(base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x i16> @test_th_vlb_v_i16m1
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i16> @llvm.riscv.th.vlb.nxv4i16.i64(<vscale x 4 x i16> poison, ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i16> [[TMP0]]
//
vint16m1_t test_th_vlb_v_i16m1(const int16_t *base, size_t vl) {
  return __riscv_vlb_v_i16m1(base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x i16> @test_th_vlb_v_i16m2
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i16> @llvm.riscv.th.vlb.nxv8i16.i64(<vscale x 8 x i16> poison, ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i16> [[TMP0]]
//
vint16m2_t test_th_vlb_v_i16m2(const int16_t *base, size_t vl) {
  return __riscv_vlb_v_i16m2(base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x i16> @test_th_vlb_v_i16m4
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i16> @llvm.riscv.th.vlb.nxv16i16.i64(<vscale x 16 x i16> poison, ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x i16> [[TMP0]]
//
vint16m4_t test_th_vlb_v_i16m4(const int16_t *base, size_t vl) {
  return __riscv_vlb_v_i16m4(base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 32 x i16> @test_th_vlb_v_i16m8
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x i16> @llvm.riscv.th.vlb.nxv32i16.i64(<vscale x 32 x i16> poison, ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x i16> [[TMP0]]
//
vint16m8_t test_th_vlb_v_i16m8(const int16_t *base, size_t vl) {
  return __riscv_vlb_v_i16m8(base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x i32> @test_th_vlb_v_i32m1
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i32> @llvm.riscv.th.vlb.nxv2i32.i64(<vscale x 2 x i32> poison, ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i32> [[TMP0]]
//
vint32m1_t test_th_vlb_v_i32m1(const int32_t *base, size_t vl) {
  return __riscv_vlb_v_i32m1(base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x i32> @test_th_vlb_v_i32m2
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i32> @llvm.riscv.th.vlb.nxv4i32.i64(<vscale x 4 x i32> poison, ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
vint32m2_t test_th_vlb_v_i32m2(const int32_t *base, size_t vl) {
  return __riscv_vlb_v_i32m2(base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x i32> @test_th_vlb_v_i32m4
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i32> @llvm.riscv.th.vlb.nxv8i32.i64(<vscale x 8 x i32> poison, ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i32> [[TMP0]]
//
vint32m4_t test_th_vlb_v_i32m4(const int32_t *base, size_t vl) {
  return __riscv_vlb_v_i32m4(base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x i32> @test_th_vlb_v_i32m8
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i32> @llvm.riscv.th.vlb.nxv16i32.i64(<vscale x 16 x i32> poison, ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x i32> [[TMP0]]
//
vint32m8_t test_th_vlb_v_i32m8(const int32_t *base, size_t vl) {
  return __riscv_vlb_v_i32m8(base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 1 x i64> @test_th_vlb_v_i64m1
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i64> @llvm.riscv.th.vlb.nxv1i64.i64(<vscale x 1 x i64> poison, ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x i64> [[TMP0]]
//
vint64m1_t test_th_vlb_v_i64m1(const int64_t *base, size_t vl) {
  return __riscv_vlb_v_i64m1(base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x i64> @test_th_vlb_v_i64m2
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i64> @llvm.riscv.th.vlb.nxv2i64.i64(<vscale x 2 x i64> poison, ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i64> [[TMP0]]
//
vint64m2_t test_th_vlb_v_i64m2(const int64_t *base, size_t vl) {
  return __riscv_vlb_v_i64m2(base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x i64> @test_th_vlb_v_i64m4
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i64> @llvm.riscv.th.vlb.nxv4i64.i64(<vscale x 4 x i64> poison, ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i64> [[TMP0]]
//
vint64m4_t test_th_vlb_v_i64m4(const int64_t *base, size_t vl) {
  return __riscv_vlb_v_i64m4(base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x i64> @test_th_vlb_v_i64m8
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i64> @llvm.riscv.th.vlb.nxv8i64.i64(<vscale x 8 x i64> poison, ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i64> [[TMP0]]
//
vint64m8_t test_th_vlb_v_i64m8(const int64_t *base, size_t vl) {
  return __riscv_vlb_v_i64m8(base, vl);
}
