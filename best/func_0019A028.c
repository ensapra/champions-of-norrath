typedef struct { u8 pad0[0x48]; s32 r48; s32 r4c; u8 pad1[0xF0-0x50]; s32 f0; s32 f4; s32 f8; } S;
void func_00195704(S *, s32);
void func_00195A78(S *, s32, s32);
void func_0019A028(S *s) {
    s32 t = s->f4;
    if (t == 0x11) {
        func_00195A78(s, 0xA, 2);
    } else if (t == 0x10) {
        s32 d = s->f8 - s->f0;
        if (d >= 0) {
            if (d >= 2) {
                if (d == 3)
                    func_00195704(s, 0);
            }
        }
    }
    s->r4c = 0;
    s->r48 = -1;
}
