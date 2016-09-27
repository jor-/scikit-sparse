#include "cholmod.h"

// CHOLMOD_GPU_PROBLEM is only defined since version 2.0 of cholmod,
// so we need to define it here for backward compatibility
#ifndef CHOLMOD_GPU_PROBLEM
#define CHOLMOD_GPU_PROBLEM -5
#endif
