#!/bin/bash
source ../setopts.sh $*
#source ../test_ifort.sh
LIBDIR=../LIBS/lib_osx_intel_32/
source ../test_libs.sh

make -f ../Makefile clean
eval make ${SMV_MAKE_OPTS} -f ../Makefile intel_osx_32
