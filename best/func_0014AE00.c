typedef struct { u8 pad0[0x4EC]; s32 cur; u8 pad1[0x910-0x4F0]; u32 *buf[2]; u8 pad2[0x928-0x918]; s32 n; u8 pad3[0x934-0x92C]; s32 a; u32 b; } Obj;
s32 func_0016FEAC(void *, s32);
s32 func_00170894(s32, s32, u16, s32);
s64 func_0014AE00(Obj *o) {
    u32 **slot = &o->buf[o->cur];
    s32 t = o->n * 2;
    o->b = t + 6;
    o->a = t + 8;
    (*slot)[0] = (t + 6) | 0x10000000;
    (*slot)[1] = 0;
    (*slot)[2] = 0;
    (*slot)[3] = func_00170894(0x50, 0, (u16)o->b, 0);
    (*slot)[o->n * 8 + 0x1C] = 0x60000000;
    (*slot)[o->n * 8 + 0x1D] = 0;
    (*slot)[o->n * 8 + 0x1E] = 0;
    (*slot)[o->n * 8 + 0x1F] = 0;
    return func_0016FEAC(*slot + 4, o->n * 2 + 5);
}
