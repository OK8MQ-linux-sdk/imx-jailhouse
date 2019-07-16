/*
 * Jailhouse AArch64 support
 *
 * Copyright (C) 2015 Huawei Technologies Duesseldorf GmbH
 *
 * Authors:
 *  Antonios Motakis <antonios.motakis@huawei.com>
 *
 * This work is licensed under the terms of the GNU GPL, version 2.  See
 * the COPYING file in the top-level directory.
 */

#include <asm/processor.h>
#include <jailhouse/types.h>

struct trap_context {
	unsigned long *regs;
	u64 esr;
	u64 spsr;
	u64 sp;
};

void arch_handle_trap(union registers *guest_regs);
void arch_el2_abt(union registers *regs);
