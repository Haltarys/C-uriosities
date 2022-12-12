#include <stdio.h>
#include <stdint.h>

#define SET_BIT(BF, N) ((BF) |= (uint32_t)1 << (N))
#define CLR_BIT(BF, N) ((BF) &= ~((uint32_t)1 << (N)))
#define IS_BIT_SET(BF, N) (((BF) >> (N)) & 1)

int main(void)
{
    printf("size of char = %lu\n", sizeof(char));
    printf("size of unsigned int = %lu\n", sizeof(unsigned int));
    printf("size of int = %lu\n", sizeof(int));
    printf("\n");
    printf("size of uint32_t = %lu\n", sizeof(uint32_t));
    printf("size of int32_t = %lu\n", sizeof(int32_t));
    printf("size of uint8t = %lu\n", sizeof(uint8_t));

    return 0;
}
