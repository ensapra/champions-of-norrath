s32 D_0048090C;
extern u8 D_00366310[];
s32 TerminateThread(s32);
s32 DeleteThread(s32);
void func_0019C158(void *);

s32 func_0019B038(void)
{
    TerminateThread(D_0048090C);
    DeleteThread(D_0048090C);
    D_0048090C = -1;
    func_0019C158(D_00366310);
    func_0019C158(D_00366310 + 0x824);
    return 0;
}

extern u8 jtbl_004C006C[];
void func_0019A0B0(void *);

void func_0019AC24(u8 *p)
{
    u32 tab[8];
    u32 sum = 0;
    u32 i;
    u32 v;

    __builtin_memcpy(tab, jtbl_004C006C + 0xF3DC, sizeof(tab));
    i = 0;
    v = *(u32 *)(p + 0x48);
    *(s32 *)(p + 0xA84) = -1;
    *(s32 *)(p + 0xF0) = 0;
    while (i < 8 && v >= sum + tab[i]) {
        sum += tab[i];
        i++;
    }
    v -= sum;
    *(u32 *)(p + 0xF8) = i;
    *(u32 *)(p + 0xF4) = v;
    func_0019A0B0(p);
}

typedef struct {
    u8 pad[0x18C];
    u8 flags;
    u8 pad2[0x198 - 0x18D];
} Ent198;

s32 func_0019A594(u8 *p, s32 n)
{
    u32 cnt = *(u32 *)(p + 0x68);
    s32 k = 0;
    u32 i;
    for (i = 0; i < cnt; i++) {
        if ((*(Ent198 **)(p + 0x78))[i].flags & 0x20) {
            if (n == k)
                return i;
            k++;
        }
    }
    return -1;
}
