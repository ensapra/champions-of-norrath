typedef struct {
    void *x0;
    void *x4;
    void *x8;
    u8 pad[0x1C];
} S_010EA1E0;

extern S_010EA1E0 D_010EA1E0[];

void func_00173C60(void *, s32, s16, s16, s16, s16);

void func_00173C10(s32 i, s32 a, s16 c, s16 d, s16 e, s16 f) {
    func_00173C60(D_010EA1E0[i].x8, a, c, d, e, f);
}
