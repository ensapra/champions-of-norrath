typedef struct { s16 delta; s16 index; s32 (*fn)(void *, ...); } VEnt;
typedef struct { u8 pad[0x60]; VEnt *vt; } Obj;
extern char D_004795D0[], D_004795E8[];
f32 D_00482EB8 = 0.2f, D_00482EBC = 0.2f;
extern s32 func_001671F8(char *);
extern void func_00190E20(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_002B9010(Obj *o, s32 arg1, s32 arg2) {
    s32 t19, t20, t18, t16;
    f32 x, y;
    s32 r;
    VEnt *e;
    e = &o->vt[11];
    t19 = e->fn((u8 *)o + e->delta, 0);
    e = &o->vt[11];
    t20 = e->fn((u8 *)o + e->delta, 1, arg2);
    e = &o->vt[11];
    t18 = e->fn((u8 *)o + e->delta, 2, arg2);
    e = &o->vt[11];
    t16 = e->fn((u8 *)o + e->delta, 3, arg2);
    if (t18 != 0) {
        r = func_001671F8(D_004795D0);
        x = (f32)t19;
        y = x + x * D_00482EB8;
        if (y >= 0.0f) y += 0.5f; else y -= 0.5f;
        func_00190E20(arg1, r, x, (f32)(s32)y, (f32)t20, (f32)t18, (f32)t16, 0.0f, 0.0f, 0.0f);
    } else {
        r = func_001671F8(D_004795E8);
        x = (f32)t19;
        y = x + x * D_00482EBC;
        if (y >= 0.0f) y += 0.5f; else y -= 0.5f;
        func_00190E20(arg1, r, x, (f32)(s32)y, (f32)t20, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    }
}
