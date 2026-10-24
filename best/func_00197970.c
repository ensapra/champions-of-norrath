typedef struct { s32 size; s32 count; u8 *rd; u8 *wr; u8 data[1]; } Ring;

void func_001AE898(Ring *r)
{
    r->count++;
    r->wr++;
    if (r->wr == r->data + r->size) {
        r->wr = r->data;
    }
}

extern u8 *D_00480488;
extern u8 D_004CF1E0[];

typedef struct { u8 pad[0x198]; } E198;

void func_0019798C(u8 *arg0, u8 *arg1)
{
    s32 n = *(s32 *)(arg0 + 0x48);
    E198 *p = *(E198 **)(arg0 + 0x78);
    s32 v = *(s32 *)(arg0 + 0x6C);
    ((void (*)(u8 *, s32))*(void **)(arg1 + 0x2C))(arg1, v + (*(u16 *)((u8 *)&p[n] + 0x180) << 4));
}

void func_00197970(u8 *arg0, s32 *arg1, s32 *arg2)
{
    *arg1 = ((s32 *)*(s32 *)(arg0 + 0x7C))[0];
    *arg2 = ((s32 *)*(s32 *)(arg0 + 0x7C))[1];
}

void func_0019790C(u8 *arg0, u32 arg1, u8 arg2)
{
    if (arg1 >= 5) {
        ((void (*)(u8 *, u32, s32))*(void **)(D_00480488 + 0xF4))(D_004CF1E0, arg1, arg2);
    } else {
        ((void (*)(u8 *, u32, s32))*(void **)(arg0 + 0x34))(arg0, arg1, arg2);
    }
}
