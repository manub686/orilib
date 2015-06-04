/**
Atomix project, ORILIB_MapperBPSK_i.h, TODO: insert summary here
Copyright (c) 2015 Stanford University
Released under the Apache License v2.0. See the LICENSE file for details.
Author(s): Manu Bansal
*/

#ifndef ORILIB_MAPPERBPSK_I_H_
#define ORILIB_MAPPERBPSK_I_H_

#include <osl/inc/swpform.h>
#include "ORILIB_MapperBPSK_t.h"

void ORILIB_MapperBPSK_i ( 
	IN 	ORILIB_t_ByteBuf48   		 * inpBitsBuf,
	OUT	ORILIB_t_Cplx16Buf48     * outSampleBuf,
	CF  ORILIB_MapperBPSK_t_Conf * conf
	);

void ORILIB_MapperBPSK_i_conf(
	CF ORILIB_MapperBPSK_t_Conf * conf,
	Uint32 scaleFactor
	);

#endif

