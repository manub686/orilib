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
  void (*filter)(void *, Uint32, Int32 *, Uint32 *);
  Int32 block_on_queue;
} ORILIB_EthReaderBuffered_t_Conf;

#define ORILIB_ETHREADERBUFFERED_N_QUEUES		5
#define ORILIB_ETHREADERBUFFERED_N_BUFS			20
//#define MSS			1500
#define MSS			1536	//nearest multiple of 64, so that 
					//our memory allocations for MSS-sized
					//buffers are going to be 64-byte aligned

typedef struct {
  char pktBuf[ORILIB_ETHREADERBUFFERED_N_QUEUES][ORILIB_ETHREADERBUFFERED_N_BUFS][MSS] __attribute__((aligned(64))); 
  Uint32 lastWritten[ORILIB_ETHREADERBUFFERED_N_QUEUES];
  Uint32 nWritten[ORILIB_ETHREADERBUFFERED_N_QUEUES];
} ORILIB_t_EthReaderBuffer;

#endif /* ORILIB_ETHREADERBUFFERED_T_H */
