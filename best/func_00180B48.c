typedef int u128 __attribute__((mode(TI)));
typedef struct Ctx { u8 pad[0xC0]; s32 c0; s32 c4; s32 c8; s32 cC; u8 pad2[0x564 - 0xD0]; void *gs; } Ctx;
Ctx *D_00480430;
extern char jtbl_004C006C[];
extern s32 func_00180CF4(void);
extern void func_001A2850(void *);
extern void func_001916D0(void *, s32);
extern void func_001917D8(void *, s32);
extern void func_00191860(void *, u128);
extern void func_001919C8(void *, s32, long);
extern void func_00191878(void *);
extern void ovl_ntgui2_func_00191830(void *);

s32 func_00180B48(s32 x, s32 unused, s32 y, s32 z)
{
    s32 x4, y4, n, need;
    long a, b;
    s32 p, q;

    x4 = x / 4;
    y4 = y / 4;
    x4 *= 4;
    y4 *= 4;
    n = (y4 - x4) / 4;
    need = n * 2 + 4;
    if (func_00180CF4() < need) {
        func_001A2850(jtbl_004C006C + 0xD5DC);
        return -1;
    }
    n--;
    func_001916D0(D_00480430->gs, 0);
    func_001917D8(D_00480430->gs, 0);
    func_00191860(D_00480430->gs, *(u128 *)(jtbl_004C006C + 0xD4E4));
    func_001919C8(D_00480430->gs, 0, 0x46);
    a = D_00480430->c0 | ((long)D_00480430->cC << 24);
    b = ((long)D_00480430->c8 << 16) | ((long)D_00480430->c4 << 8);
    func_001919C8(D_00480430->gs, 1, a | b);
    if (n != -1) {
        q = x4 * 16 + 0x6C20;
        p = x4 * 16 + 0x6C00;
        do {
            func_001919C8(D_00480430->gs, 5, p | ((long)((z + 0x71F) << 4) << 16));
            p += 0x40;
            func_001919C8(D_00480430->gs, 5, q | ((long)((z + 0x720) << 4) << 16));
            q += 0x40;
            n--;
        } while (n != -1);
    }
    func_00191878(D_00480430->gs);
    ovl_ntgui2_func_00191830(D_00480430->gs);
    return 0;
}
