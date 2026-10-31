/* identical to func_00112950 (matched), with its names changed by decompdecomp */
extern char D_011AFA78[];

char *VIMemCardProductId__Fv(void) {
    return D_011AFA78;
}

void func_00112940(void *arg0) {
    *(u8 *)((char *)arg0 + 0x4C) = 1;
}

void func_00112900(void *arg0, void *arg1, s32 arg2, s8 arg3, s8 arg4, s8 arg5, s8 arg6, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    void **base = (void **)((u8 *)arg1 + arg2 * 8);
    void *ptr = base[1];
    *(s8 *)((u8 *)ptr + 0x18) = arg3;
    *(f32 *)((u8 *)ptr + 0x14) = fparg0;
    *(s8 *)((u8 *)ptr + 0x20) = arg4;
    *(f32 *)((u8 *)ptr + 0x1C) = fparg1;
    *(s8 *)((u8 *)ptr + 0x28) = arg5;
    *(f32 *)((u8 *)ptr + 0x24) = fparg2;
    *(s8 *)((u8 *)ptr + 0x30) = arg6;
    *(f32 *)((u8 *)ptr + 0x2C) = fparg3;
}

struct Struct_1128A8 {
    u8 pad[0x24];
    void *unk24;
};

void func_001128A8(struct Struct_1128A8 *arg0, s32 arg1, s8 arg2, s8 arg3, s8 arg4, s8 arg5, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    void **base = (void **)((u8 *)arg0->unk24 + arg1 * 8);
    void *ptr = base[1];
    *(s8 *)((u8 *)ptr + 0x18) = arg2;
    *(f32 *)((u8 *)ptr + 0x14) = fparg0;
    *(s8 *)((u8 *)ptr + 0x20) = arg3;
    *(f32 *)((u8 *)ptr + 0x1C) = fparg1;
    *(s8 *)((u8 *)ptr + 0x28) = arg4;
    *(f32 *)((u8 *)ptr + 0x24) = fparg2;
    *(s8 *)((u8 *)ptr + 0x30) = arg5;
    *(f32 *)((u8 *)ptr + 0x2C) = fparg3;
}
