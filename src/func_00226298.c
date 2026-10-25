typedef struct { s64 a __attribute__((packed)); s32 b; } L12;
extern void func_00143830(void *);
extern s32 func_00220278(void *, s32, void *, s16);
extern s32 func_0017D3D0(s32, s32);
extern s32 D_0044EF58[];
s32 D_004844A0;

void func_00226298(u8 *o, s32 a1, void *src, s16 a3) {
    L12 loc;
    s32 x, d;
    loc = *(L12 *)src;
    func_00220278(o, a1, &loc, a3);
    *(void **)(o + 0x48) = D_0044EF58;
    x = *(s32 *)(o + 0x18C);
    d = D_004844A0;
    *(s32 *)(o + 0xC) |= 1;
    *(f32 *)(o + 0x198) = (f32)func_0017D3D0(d, x);
    func_00143830(o);
}
