extern s32 D_004460A4[];
extern s32 D_008E8148[];
extern s32 D_008E8150[];
void func_002E28C8(void) {
    s32 (*f)(s32);
    f = (s32 (*)(s32))D_008E8148[0];
    if (f != 0) {
        if (D_004460A4[0] == 0) {
            f(D_008E8150[0]);
        }
    }
}

typedef struct { s64 a __attribute__((packed)); s32 b; } L12;
void func_00143830(void *);
s32 func_00153FD0();
extern u8 D_0044F348[];
s32 D_004844A4;

void func_0022F360(u8 *o, L12 *a1, L12 *a2, s32 a3, s32 a4) {
    L12 x, y;
    x = *a1;
    y = *a2;
    func_00153FD0(o, &x, a4, 0);
    *(void **)(o + 0x48) = D_0044F348;
    *(L12 *)(o + 0x58) = y;
    *(s32 *)(o + 0x64) = D_004844A4 + 0x12C;
    *(s32 *)(o + 0x68) = a3;
    *(s32 *)(o + 0x6C) = 0;
    func_00143830(o);
}

f32 D_00481968;
void func_00160010(void *, s32, s32, f32, f32);

void func_0022F1D8(u8 *o, void *p) {
    L12 loc;
    loc = *(L12 *)p;
    if (*(s16 *)(o + 0x23C) == 8 && !(*(u16 *)(o + 0x126) & 0x20))
        func_00160010(o + 0x120, *(s32 *)(*(u8 **)(o + 0x24) + 0xAC), 0x20, D_00481968, D_00481968);
}

extern s32 func_00111B90(void);
extern void func_0022C250(void *, s32, s32);

s32 func_0022F148(char *dst, char *src) {
    char *base = src;
    s32 t, a;
    src += func_00111B90();
    src += 4;
    a = *(s32 *)(src - 4);
    src += 4;
    *(s32 *)(dst + 0x3CC) = a;
    *(s32 *)(dst + 0x3DC) = *(s32 *)(src - 4);
    src += 4;
    t = *(s32 *)(src - 4);
    src += 4;
    *(s32 *)(dst + 0x3E0) = t;
    *(s32 *)(dst + 0xD0) = *(s32 *)(src - 4);
    func_0022C250(dst, 1, t);
    if (*(s16 *)(dst + 0x23C) == 10) {
        *(s32 *)(dst + 0x3E4) = 0;
    }
    return src - base;
}
