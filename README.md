# Hashing-library
![Default Pipeline](https://github.com/matthew01lokiet/Hashing-library/actions/workflows/pipeline.yml/badge.svg)

Hashing library written in C; consists of 6 hashing functions and one bonus:
- `SHA-256`
- `SHA-224`
- `SHA-1`
- `SHA-0`
- `MD-5`
- `MD-4`
- `ROT-13`

## Usage Example
```c
#include <stdio.h>
#include <stdlib.h>
#include "hashing.h"

int main() {

    // hashed "test" value with SHA-224
    uint8_t test_value[] = {'t', 'e', 's', 't'};
    uint32_t* hash = Hashing.sha_224(test_value,4);

    // If some problem, NULL value will get returned
    if(hash == NULL){
        return 1;
    }

    for(int i = 0; i < 7; i++){
        printf("%#010x ", hash[i]);
    }
    printf("\n");
    // Remember about freeing memory allocated for the hash!
    free(hash);

    return 0;
}
```
