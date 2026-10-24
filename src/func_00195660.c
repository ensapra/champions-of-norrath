s32 func_001959B8(void *, s32, s32);
s32 func_00195A78(void *, s32, s32);
s32 func_00196B88(void *);
s32 func_00196E00(void *, s32);

void func_00195660(u8 *p, s32 f) {
    u8 v = p[0x52];
    if ((u8)f == 0) v = (v | 1) & 0x7F;
    else v = v ^ 0x81;
    p[0x52] = v;
    func_00196B88(p);
    func_00196E00(p, *(s32 *)(p + 0x54));
    if (p[0x52] & 1) {
        func_001959B8(p, 2, 2);
        func_001959B8(p, 3, 2);
    } else {
        func_00195A78(p, 2, 2);
        func_00195A78(p, 3, 2);
    }
}
