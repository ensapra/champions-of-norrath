typedef struct {
    void *x0;
    void *x4;
    void *x8;
    u8 pad[0x1C];
} S_010EA1E0;

extern S_010EA1E0 D_010EA1E0[];

void func_00173910(void *, s32, s16, s16, s16, s16, s16);
void func_00173B00(void *, s16, s16, s16, s16, s16);
void func_00173C60(void *, s16, s16, s16, s16);

void func_001738B8(s32 i, s32 a, s16 b, s16 c, s16 d, s16 e, s16 f) {
    func_00173910(D_010EA1E0[i].x0, a, b, c, d, e, f);
}

void func_00173AA8(s32 i, s16 b, s16 c, s16 d, s16 e, s16 f) {
    func_00173B00(D_010EA1E0[i].x4, b, c, d, e, f);
}

void func_00173C10(s32 i, s32 a, s16 c, s16 d, s16 e, s16 f) {
    func_00173C60(D_010EA1E0[i].x8, c, d, e, f);
}

s32 func_001736A8(s32 flag, s16 w, s16 h) {
    s32 nw;
    s32 nh;
    nw = (w + 0x3F) / 64;
    if (flag & 2) {
        nh = (h + 0x3F) / 64;
    } else {
        nh = (h + 0x1F) / 32;
    }
    return nw * nh;
}
