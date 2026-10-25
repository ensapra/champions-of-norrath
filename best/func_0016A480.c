typedef struct { char c[8]; } B8;
typedef struct { char pad0[0x5AC]; s32 f5AC; s32 f5B0; char pad5B4[0x5C0 - 0x5B4]; char f5C0[0x58]; s32 f618; } S;
extern void func_0014C030(s32, s32, void *, s32, s32, s32, void *);
extern f32 func_0014C97C(s32);
extern f32 func_0014CA18(s32);

void func_0016A480(S *a, s32 mode, s32 x, s32 y, volatile s32 rx, s32 ry, char *out) {
    s32 base;
    s32 i;
    s32 ang;
    s32 xx;
    base = -0x4000;
    if (mode != 1 && (mode < 2 || (base = 0x4000, mode != 2 && (base = 0, mode != 3)))) base = 0x8000;
    i = 0;
    func_0014C030(a->f5AC, a->f5B0, a->f5C0, a->f618, x, y, out);
    out += 0x20;
    *(B8 *)(out) = *(B8 *)(out - 0x20);
    out += 0x20;
    *(B8 *)(out) = *(B8 *)(out - 0x20);
    out += 0x20;
    *(B8 *)(out) = *(B8 *)(out - 0x20);
    out += 0x20;
    do {
        ang = base + (i << 14) / 7;
        i++;
        xx = x + (s32)((f32)rx * func_0014CA18(ang));
        func_0014C030(a->f5AC, a->f5B0, a->f5C0, a->f618, xx, y + (s32)((f32)ry * func_0014C97C(ang)), out);
        out += 0x20;
    } while (i < 8);
}
