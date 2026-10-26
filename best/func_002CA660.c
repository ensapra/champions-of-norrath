extern s32 D_00484CA4;
extern void func_00172DC0(u32, s32, s32);
extern s32 func_00173C08(s32, s32, u16 *, s32, s32, s32, s32);
extern s32 func_001744A0(s32, u16 *, s32);

s32 func_002CA660(s32 x, s32 y, u8 *name, u8 *prefix, s32 width, u32 color) {
    u16 text[256];
    u16 pre[256];
    s32 i, n, y2;
    u32 dim;

    if (name == 0) {
        text[0] = 0x20;
        text[1] = 0;
        pre[0] = 0;
    } else {
        if (prefix != 0) {
            i = 0;
            if (prefix[0] != 0) {
                do {
                    pre[i] = prefix[i];
                    i++;
                } while (prefix[i] != 0);
            }
            pre[i++] = 0x3A;
            pre[i++] = 0x20;
            pre[i] = 0;
            i = 0;
            if (name[0] != 0) {
                do {
                    text[i] = name[i];
                    i++;
                } while (name[i] != 0);
            }
        } else {
            pre[0] = 0x3E;
            pre[1] = 0x20;
            pre[2] = 0;
            i = 0;
            if (name[0] != 0) {
                do {
                    text[i] = name[i];
                    i++;
                } while (name[i] != 0);
            }
        }
        text[i] = 0;
    }
    n = func_001744A0(D_00484CA4, pre, 1000000);
    y2 = y - func_00173C08(x + n, y, text, width - n, 0, 0, 0x15);
    func_00172DC0(color, -1, 0);
    func_00173C08(x, y2, pre, width, 0xE6, 0x244, 0x15);
    dim = ((color & 0xFF) >> 1) | ((color >> 24) << 24) | ((((color >> 16) & 0xFF) >> 1) << 16) | ((color >> 1) & 0x7F00);
    func_00172DC0(dim, -1, 0);
    func_00173C08(x + n, y2, text, width - n, 0xE6, 0x244, 0x15);
    return y2;
}
