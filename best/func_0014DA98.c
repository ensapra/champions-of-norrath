void func_0016FB0C(void *);
void func_0014D270(void *);

void func_0014DA98(u8 *o, s32 n)
{
    *(s32 *)(o + 0x504) = n;
    switch (n) {
    case 1:
        *(s32 *)(o + 0x508) = 0;
        *(s32 *)(o + 0x50C) = 0xFF;
        func_0016FB0C(o + 0x518);
        *(s32 *)(o + 0x510) = 0;
        break;
    case 2:
    case 3:
        *(s32 *)(o + 0x50C) = 0;
        *(s32 *)(o + 0x508) = 0xFF;
        func_0016FB0C(o + 0x518);
        switch (n) {
        case 3:
            *(s32 *)(o + 0x510) = 1;
            break;
        default:
            *(s32 *)(o + 0x510) = 0;
            break;
        }
        break;
    case 0:
    default:
        if (*(s32 *)(o + 0x510) != 0)
            func_0014D270(o);
        break;
    }
}
