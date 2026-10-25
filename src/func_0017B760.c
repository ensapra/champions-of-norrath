s32 func_0017B6C8(void *a0, s32 a1, void *src, s32 n);

s32 func_0017B760(void *a0, s32 a1, u32 msg)
{
    s32 n;
    u32 m = msg;

    switch (m & 0xF0) {
    case 0x80:
    case 0xC0:
    case 0xD0:
        n = 2;
        break;
    case 0x90:
    case 0xA0:
    case 0xB0:
    case 0xE0:
        n = 3;
        break;
    default:
        return -1;
    }
    return func_0017B6C8(a0, a1, &m, n);
}
