extern u8 D_00448480[9];
void func_003001A8(void *);
s16 func_002FFF48(void *arg0) {
    void *v = *(void **)((char *)arg0 + 0x54);
    if (!v) {
        s32 raw = *(s32 *)D_00448480;
        *(s32 *)((char *)arg0 + 0x54) = raw;
        v = (void *)raw;
    }
    if (*(volatile s32 *)((char *)v + 0x38) == 0) func_003001A8(v);
    return *(s16 *)((char *)arg0 + 0xE);
}
