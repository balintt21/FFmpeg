#include "runtime_measure.h"

#include <time.h>
#include <string.h>

int64_t rm_global_vars[128];

int64_t rm_get_monotonic_time_ms()
{
    struct timespec t;
    clock_gettime(CLOCK_MONOTONIC_RAW, &t);
    return (t.tv_sec) * 1000ll + (t.tv_nsec) / 1000000ll;
}

int64_t rm_get_monotonic_time_us()
{
    struct timespec t;
    clock_gettime(CLOCK_MONOTONIC_RAW, &t);
    return (t.tv_sec) * 1000000ll + (t.tv_nsec) / 1000ll;
}

int64_t rm_get_monotonic_time_ns()
{
    struct timespec t;
    clock_gettime(CLOCK_MONOTONIC_RAW, &t);
    return (t.tv_sec) * 1000000000ll + t.tv_nsec;
}

void rm_init()
{
    memset(rm_global_vars, sizeof(int64_t)*128, 0);
}

#warning compiles runtime measurement
