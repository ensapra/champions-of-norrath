typedef struct {
    u8 pad0[0x5A0];
    s32 a0, a1; s32 pad2; s32 a3, a4;
    u8 pad1[0x5D4-0x5B4];
    s32 b;
    u8 pad3[0x810-0x5D8];
    s32 c0, c1, c2, c3, c4, c5;
    s32 pad5[2];
    s32 r0, r1, r2, r3;
    u8 pad4[0x858-0x840];
    s32 ok;
} S150;
void func_0014BA50(s32, s32, s32, s32, s32 *, s32 *, s32 *, s32 *);
void func_00150BE8(S150 *s) {
    s32 t7 = s->b;
    s32 t10 = s->a0;
    s32 t8 = s->a1;
    s32 t5 = s->c0;
    s32 t4 = s->c1;
    s32 r2 = t5 + t7 + (s->a3 + t10);
    s32 r3 = t4 + t7 + (s->a4 + t8);
    s32 r0 = t5 + t10 + t7;
    s32 r1 = t4 + t8 + t7;
    s->r0 = r0;
    s->r1 = r1;
    s->r2 = r2;
    s->r3 = r3;
    func_0014BA50(s->c2, s->c3, s->c4, s->c5, &s->r0, &s->r1, &s->r2, &s->r3);
    if (s->r2 <= s->r0) { s->ok = 0; return; }
    if (s->r3 <= s->r1) { s->ok = 0; return; }
    s->ok = 1;
}
