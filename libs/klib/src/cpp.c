#include "klib.h"

#ifndef __ISA_NATIVE__ 
//I do not know why this **sometime** have problem, eventhough Makefile.compile define this

void __dso_handle() {
}

void __cxa_guard_acquire() {
}

void __cxa_guard_release() {
}


void __cxa_atexit() {
  assert(0);
}

#endif
