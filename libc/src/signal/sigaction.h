//===-- Implementation header for sigaction ---------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIBC_SRC_SIGNAL_SIGACTION_H
#define LLVM_LIBC_SRC_SIGNAL_SIGACTION_H

#include "hdr/types/struct_sigaction.h"

namespace LIBC_NAMESPACE {

int sigaction(int signal, const struct sigaction *__restrict libc_new,
              struct sigaction *__restrict libc_old);

} // namespace LIBC_NAMESPACE

#endif // LLVM_LIBC_SRC_SIGNAL_SIGACTION_H
