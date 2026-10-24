extern u8 func_001C8098[];
void func_0016FB0C(void *);

s32 func_00162C18(u8 *p, u16 *e)
{
    void *f = func_001C8098;
    s32 r;
    f = *(void **)((u8 *)f + 0xDAC);
    r = ((s32 (*)(void))f)();
    switch (*e) {
    case 5: case 6: case 7:
        *(s32 *)(p + 0x91C) = 1;
        *(s32 *)(p + 0x920) = 1;
        func_0016FB0C(p + 0x928);
        break;
    case 8: case 9: case 10:
        *(s32 *)(p + 0x91C) = 0;
        *(s32 *)(p + 0x920) = 1;
        func_0016FB0C(p + 0x928);
        break;
    }
    return r;
}
