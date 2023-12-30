#!/bin/bash -eu
$CXX $CFLAGS $LIB_FUZZING_ENGINE \
  $SRC/fast_obj/.clusterfuzzlite/fast_obj_fuzzer.cpp \
  -o $OUT/fast_obj_fuzzer \
  -I$SRC/fast_obj