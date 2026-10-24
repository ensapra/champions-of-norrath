u8 *func_001884C8();

u8 *func_00188528(u8 *a, s32 *out)
{
    u8 *p = func_001884C8();
    if (p != 0 && *(s32 *)p == 0x745865) {
        if (out != 0) {
            *out = *(s32 *)(p + 8);
        }
        return p + 0x10;
    }
    return p;
}
