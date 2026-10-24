extern u8 D_004CECB8[];
extern u8 D_004CED70[];
void *D_00480488;
s32 func_001959B8(void *, s32, s32);
s32 func_00195A78(void *, s32, s32);
s32 func_00196B88(void *);
s32 func_00196E00(void *, s32);
s32 func_00197958(void *);
void func_001A1568(void *, s32, void *);

s64 func_00195660(u8 *p, s32 f) {
    u8 g = f;
    if (g == 0) p[0x52] = (p[0x52] | 1) & 0x7F;
    else p[0x52] = p[0x52] ^ 0x81;
    func_00196B88(p);
    func_00196E00(p, *(s32 *)(p + 0x54));
    if (p[0x52] & 1) {
        func_001959B8(p, 2, 2);
        return func_001959B8(p, 3, 2);
    }
    func_00195A78(p, 2, 2);
    return func_00195A78(p, 3, 2);
}

void func_001955BC(u8 *p) {
    u8 r;
    if (p == 0) func_001A1568(D_004CECB8, 0x3FD, D_004CED70);
    switch (*(s32 *)(p + 0x44)) {
    case 0:
        p[0x52] = p[0x52] | 6;
        func_001959B8(p, 1, 4);
        break;
    case 1:
        p[0x52] = p[0x52] | 4;
        func_001959B8(p, 0xB, 2);
        break;
    default:
        p[0x52] = 0;
    }
    r = func_00197958(p);
    ((void (*)(s32))*(void **)((u8 *)D_00480488 + 0xC))(r);
}
