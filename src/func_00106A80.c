typedef struct __attribute__((packed, aligned(4))) { s32 v[7]; } E28;
void func_00106288(void *);

void func_00106A80(u8 *arg0, s32 arg1, u8 *arg2) {
    s32 n = *(s32 *)(arg2 + 0xC);
    s32 end = arg1 + n;
    s32 i;
    E28 *src;
    E28 *dst;

    while (*(s32 *)(arg0 + 4) < end) {
        func_00106288(arg0);
    }
    if (n > 0) {
        src = *(E28 **)(arg2 + 0);
        dst = (E28 *)(arg1 * 0x1C + *(u32 *)arg0);
        for (i = n; i != 0; i--) {
            *dst = *src;
            dst++;
            src++;
        }
    }
    *(s32 *)(arg0 + 0xC) = end;
}
