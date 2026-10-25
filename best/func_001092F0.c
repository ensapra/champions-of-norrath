typedef struct {
    u8 pad0[0xA0];
    u64 flags;
    u8 padA8[0xC8 - 0xA8];
    s16 c8, cA, cC;
    u8 padCE[0xDC - 0xCE];
    f32 dc;
    u8 padE0[0xE8 - 0xE0];
    s16 e8;
    u8 padEA[0x230 - 0xEA];
    f32 f230, f234;
} Obj;

extern void func_00135150(s32);
extern s32 func_00140F60(Obj *, char *, s32);
extern u32 func_00153FA8(Obj *);
extern f32 func_002F16D0(f32, f32);
extern f32 D_0047FB58, D_0047FB5C, D_0047FB60, D_0047FB64, D_0047FB68;
extern char D_004837B8[];
extern s8 D_00483829;
extern s32 D_00484538;
extern f32 D_00484CAC;
extern s32 D_00484CD8;

void func_001092F0(Obj *o, s32 arg1, f32 a, f32 b, f32 c, f32 d, f32 e) {
    if ((s32)(o->flags & 1)) {
        a *= 15.0f;
        c *= D_0047FB58;
        d *= 3.0f;
        e *= 7.0f;
    }
    if (D_00484538 >= 2) {
        f32 f;
        if (D_00483829) {
            s32 i;
            for (i = 0; i < D_00484538; i++) func_00135150(i);
        }
        f = (f32)(D_00484538 - 1);
        e *= f + 1.0f;
        a *= f * D_0047FB5C + 1.0f;
    }
    if (arg1) {
        u32 r = func_00153FA8(o);
        f32 t = (f32)(s32)(r % 6 + 0x12) * func_002F16D0(a * D_00484CAC, D_0047FB60);
        o->f230 = t;
        if (D_00484CD8 == 2) o->f230 = t * 1.5f;
        else if (D_00484CD8 == 3) o->f230 = 2.0f * t;
        o->f234 = o->f230;
    }
    {
        f32 g = D_0047FB64;
        o->e8 = (s16)(b * 12.0f * D_00484CAC);
        o->c8 = (s16)(c * func_002F16D0(D_00484CAC, g));
        o->cA = (s16)(2.0f * c * func_002F16D0(D_00484CAC, g));
        if (o->cA < o->c8 + 1) o->cA = (u16)o->c8 + 1;
        o->cC = (s16)(D_00484CAC * 12.0f * d);
        o->dc = func_002F16D0(e * D_00484CAC, D_0047FB68) * 8.0f;
        if (func_00140F60(o, D_004837B8, 0)) o->f230 = 0.0f;
    }
}
