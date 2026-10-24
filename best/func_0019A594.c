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
        if ((*(Ent198 * volatile *)(p + 0x78))[i].flags & 0x20) {
            if (n == k)
                return i;
            k++;
        }
    }
    return -1;
}
