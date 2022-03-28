#include <stdint.h>
#pragma once

struct hashing {
    uint32_t* (*sha_256)(uint8_t*,uint64_t);
    uint32_t* (*sha_224)(uint8_t*,uint64_t);
    uint32_t* (*sha_1)(uint8_t*,uint64_t);
    const char* (*sha_0)(const char*);
    const char* (*md_5)(const char*);
    const char* (*md_4)(const char*);
    const char* (*rot_13)(const char*);
};

extern const struct hashing Hashing;