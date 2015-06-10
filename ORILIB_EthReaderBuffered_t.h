/**
Atomix project, ORILIB_EthReaderBuffered_t.h, TODO: insert summary here
Copyright (c) 2015 Stanford University
Released under the Apache License v2.0. See the LICENSE file for details.
Author(s): Manu Bansal
*/

#ifndef ORILIB_ETHREADERBUFFERED_T_H
#define ORILIB_ETHREADERBUFFERED_T_H 

#include <osl/inc/swpform.h>

typedef struct {
  Uint64 timeout;
  Int32 (*filter)(void *, Uint32);
} ORILIB_EthReaderBuffered_t_Conf;

#define N_QUEUES		5
#define N_BUFS			2
#define MSS			1500

typedef struct {
  char pktBuf[N_QUEUES][N_BUFS][MSS]; 
  Uint32 lastWritten[N_QUEUES];
  Uint32 nWritten[N_QUEUES];
} ORILIB_t_EthReaderBuffer;

#endif /* ORILIB_ETHREADERBUFFERED_T_H */
