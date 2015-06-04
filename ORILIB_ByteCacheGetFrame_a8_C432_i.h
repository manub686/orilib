/**
Atomix project, ORILIB_ByteCacheGetFrame_a8_C432_i.h, TODO: insert summary here
Copyright (c) 2015 Stanford University
Released under the Apache License v2.0. See the LICENSE file for details.
Author(s): Manu Bansal
*/

#ifndef ORILIB_BYTECACHEGETFRAME_A8_C432_I_H_
#define ORILIB_BYTECACHEGETFRAME_A8_C432_I_H_

#include "ORILIB_ByteCacheGetFrame_a8_C432_t.h"

void ORILIB_ByteCacheGetFrame_a8_C432_i (
	IN  ORILIB_t_ByteCache432	* inpCache,
	OUT ORILIB_t_ByteCache432	* outCache,
	OUT void			* outBuf,
	CF  ORILIB_t_ByteCacheGetFrameConf * conf
	);


void ORILIB_ByteCacheGetFrame_a8_C432_i_conf (
	CF  ORILIB_t_ByteCacheGetFrameConf * conf,
	IN  Uint32 outFrameSizeInBytes,
	IN  Uint32 consumeSizeInBytes,
	IN  Uint32 padSizeInWords,
	IN  Uint32 padWord
	);
	//IN  Uint32 outBufCapacityInBytes,

#endif

