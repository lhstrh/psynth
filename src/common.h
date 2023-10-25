#ifndef COMMON_H
#define COMMON_H

#include "kiss_fft.h"

#define SAMPLE_SIZE 1024
#define SAMPLE_TYPE float
#define SAMPLE_RATE 44100
#define SAMPLE_NUM_BYTES SAMPLE_SIZE*sizeof(SAMPLE_TYPE)
#define SAMPLE_STEP 0.000022676
    
#define PI 3.14159

typedef SAMPLE_TYPE sample_buf_t[SAMPLE_SIZE];

typedef kiss_fft_cpx fsample_buf_t[SAMPLE_SIZE];





#endif
