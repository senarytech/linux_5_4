/*
 * Copyright (c) 2014, Linaro Limited
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef TZK_MUTEX_H
#define TZK_MUTEX_H

#ifndef __ASSEMBLY__

#include "types.h"
#include "spinlock.h"
/*
 * We're using static memory allocation for some bookkeeping of the mutexes
 * to avoid memory allocations during mutex_lock(). This is to avoid problems
 * with mutex_lock() etc failing during out of memory situations.
 *
 * The maximum number of mutexes that can be initialized. A mutex that is
 * destroyed doesn't count. If the number of initialized mutexes exceeds
 * this number we'll panic().
 */
#ifndef MUTEX_MAX_NUMBER_OF
#define MUTEX_MAX_NUMBER_OF	64
#endif

enum mutex_value {
	MUTEX_VALUE_UNLOCKED,
	MUTEX_VALUE_LOCKED,
};

typedef int TEE_MutexHandle;

#define MUTEX_INITIALIZER	{ .value = MUTEX_VALUE_UNLOCKED, .handle = -1 }

TEE_Result TEE_MutexCreateExt(TEE_MutexHandle *);
TEE_Result TEE_MutexLockExt(TEE_MutexHandle);
TEE_Result TEE_MutexUnlockExt(TEE_MutexHandle);
TEE_Result TEE_MutexTrylockExt(TEE_MutexHandle);
TEE_Result TEE_MutexDestroyExt(TEE_MutexHandle);
#endif /*__ASSEMBLY__*/
#endif /*TZK_MUTEX_H*/
