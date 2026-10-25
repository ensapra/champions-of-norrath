typedef struct __attribute__((packed, aligned(4))) { u32 w[3]; } V12;
typedef struct {
    char p0[0x10]; union { V12 pos; struct { f32 x, y, f18; } v; }; char p1[0x23C-0x1C]; s16 s23C; char p2[0x40C-0x23E];
    s32 a40C; s32 a410; char p3[0x438-0x414]; f32 f438;
} Obj;
void func_00109808(Obj *, s32, s32, s32);
void func_0016CBD8(s8);
void func_0016CD20(void);
void func_001F1810(Obj *o) {
    V12 save;
    s32 v;
    save = o->pos;
    o->v.f18 = o->v.f18 + o->f438;
    if (o->s23C == 14 || o->s23C == 16) {
        v = (s32)(o->f438 * 0.5f);
        func_0016CBD8(v);
        if (v < 0x62) {
            func_00109808(o, o->a40C, o->a410, 0);
        }
        func_0016CD20();
    } else {
        func_00109808(o, o->a40C, o->a410, 0);
    }
    o->pos = save;
}
