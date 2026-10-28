typedef struct { u8 pad0[0x34C]; f32 v34C; u8 pad1[0x90C - 0x350]; f32 v90C; } Sub13A;
typedef struct { u8 pad0[0xC]; u32 flags; u8 pad1[0x530 - 0x10]; Sub13A *sub; } Obj13A;
extern u8 D_00408600[];
s32 D_00484538;
s32 func_0013AD08(void) {
    s32 n = D_00484538;
    f32 best = 0.0f;
    if (n > 0) {
        s32 i = n;
        u8 *base = D_00408600;
        u8 *q;
        q = base + 0x5570;
        do {
            Obj13A *p = *(Obj13A **)q;
            q += 0x5DB0;
            if (p && !(p->flags & 8) && p->sub) {
                if (best < p->sub->v90C)
                    best = p->sub->v34C;
            }
            i--;
        } while (i);
    }
    return (s32)(best * 128.0f);
}
