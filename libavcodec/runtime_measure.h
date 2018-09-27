#ifndef EXTERNAL_RUNTIME_MEASURE_H_
#define EXTERNAL_RUNTIME_MEASURE_H_

#include <stdint.h>

extern int64_t rm_global_vars[128];

int64_t rm_get_monotonic_time_ms();

int64_t rm_get_monotonic_time_us();

int64_t rm_get_monotonic_time_ns();

void rm_init();

#define VAR_decode_mb_cavlc_sum 0
#define VAR_decode_mb_count 1


#endif /* EXTERNAL_RUNTIME_MEASURE_H_ */
