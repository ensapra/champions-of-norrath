extern void func_00129218(s32);
extern s32 func_0011BA18(s32);
extern void func_00114948(s32, s32, s32, s32, s32, s32);
extern void func_00118140(void *, s32, void *, void *, void *);
extern void func_00118160(void *);
extern void func_0012A648(void), func_0012A678(void), func_0012A800(void);
extern s32 D_001BB6C4[];
extern s32 D_001C4D78[];
void ovl_ntgui2_func_00129130(s32 a) {
    s32 buf[8];
    if (a < 0) {
        func_00129218(a);
        return;
    }
    switch (D_001C4D78[0]) {
    case 1:
        func_00114948(4, 500, 250, func_0011BA18(0x84), 0, D_001BB6C4[0]);
        break;
    case 2:
        func_00114948(4, 500, 250, func_0011BA18(0x85), 0, D_001BB6C4[0]);
        break;
    }
    func_00118140(buf, 1, func_0012A648, func_0012A678, func_0012A800);
    buf[2] = (s32)func_00129218;
    func_00118160(buf);
}
