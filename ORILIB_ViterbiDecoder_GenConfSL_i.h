/**
Atomix project, ORILIB_ViterbiDecoder_GenConfSL_i.h, TODO: insert summary here
Copyright (c) 2015 Stanford University
Released under the Apache License v2.0. See the LICENSE file for details.
Author(s): Manu Bansal
*/

#ifndef ORILIB_VITERBIDECODER_GENCONFSL_I_H_
#define ORILIB_VITERBIDECODER_GENCONFSL_I_H_

#include "ORILIB_ViterbiDecoder_t.h"

void ORILIB_ViterbiDecoder_GenConfSL_i (
	IN  ORILIB_t_ViterbiDecoderState * const inpState,
	OUT ORILIB_t_ViterbiDecoderState * const outState,
	CF  ORILIB_t_ViterbiDecoderGenConfConf * const conf
	);

void ORILIB_ViterbiDecoder_GenConfSL_i_conf (
	CF  ORILIB_t_ViterbiDecoderGenConfConf * const conf,
	IN  Vitdec_Mode mode,
	IN  Uint32 num_bits_to_decode
	);

#endif

