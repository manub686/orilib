/**
Atomix project, ORILIB_BitCacheGet_a8_C1024_i.h, TODO: insert summary here
Copyright (c) 2015 Stanford University
Released under the Apache License v2.0. See the LICENSE file for details.
Author(s): Manu Bansal
*/

#ifndef ORILIB_BITCACHEGET_A8_C1024_I_H_
#define ORILIB_BITCACHEGET_A8_C1024_I_H_

#include "ORILIB_BitCacheGet_a8_C1024_t.h"

void ORILIB_BitCacheGet_a8_C1024_i (
	IN  ORILIB_t_BitCache1024	* inpCache,
	OUT ORILIB_t_BitCache1024	* outCache,
	OUT void			* outBuf,
	CF  ORILIB_t_BitCacheGetConf * conf
	);

void ORILIB_BitCacheGet_a8_C1024_i_conf (
	CF  ORILIB_t_BitCacheGetConf * conf,
	IN  Uint32 outBufSizeInBits,
	IN  Uint32 copySizeInBits
	);

#endif

