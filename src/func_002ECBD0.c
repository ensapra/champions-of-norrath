typedef struct { u8 pad[0x8C0]; s64 a; s64 b; s32 c; } S8C0;
s64 func_002F81C0(s64, s32);
void func_002ECBD0(S8C0 *s, u16 *in, s64 *out) {
    s64 prev = s->a;
    s64 acc = s->b;
    s64 phase = s->c;
    s64 cur;
    s32 i;
    for (i = 0x9F; i != -1; i--) {
        s64 d;
        s64 r;
        cur = ((s32)(*in++ << 16) >> 19) * 4;
        d = cur - prev;
        prev = cur;
        acc += d << 15;
        r = func_002F81C0(phase, -0x7000) >> 15;
        phase = (acc + 0x4000) >> 15;
        *out++ = phase + r;
    }
    s->a = cur;
    s->b = acc;
    s->c = (s32)phase;
}
