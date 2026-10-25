typedef struct { s32 w, y, h, z; } Rc;
extern s32 D_001BB6BC[];
extern s32 D_001BB6C4[];
extern s32 D_010CE318[];
extern s32 D_010CE320[];
extern Rc D_010CE338[];
extern s32 func_0011BA18(s32);
extern void func_001A42B8(void *, s32);
extern void func_001A3D78(void *, s32, void *);
extern s32 func_0010F6B0(s32, void *, void *);
extern void func_00138990(s32);
extern void func_00139550(s32, s32);
extern void func_0010C7E8(s32, s32, s32, s32);
extern void func_00135A50(void);

typedef struct { char pad[0x10]; s32 state; } Msg;

s32 func_00135680(Msg *arg0)
{
    char a[16];
    char b[0x80];
    char *bp;
    s32 y, i;
    s32 t;

    switch (arg0->state) {
    case 1:
        D_010CE338[0].w = 0x78;
        D_010CE338[0].h = 0x1A4;
        D_010CE338[0].z = 0x16;
        if (D_001BB6BC[0] != 0) {
            func_001A42B8(a, func_0011BA18(0xE));
        } else {
            func_001A42B8(a, func_0011BA18(0xD));
        }
        for (i = 0, bp = b, y = 0x2D; i < 3; i++) {
            D_010CE338[0].y = y;
            func_001A3D78(bp, func_0011BA18(0x11E + i), a);
            y += 0x16;
            D_010CE320[i] = func_0010F6B0(D_010CE318[0], D_010CE338, bp);
        }
        return 0;
    case 2:
        D_001BB6C4[0] = D_010CE320[0];
        func_00138990(D_010CE320[0]);
        return 0;
    case 3:
        func_00139550(0, 0x28);
        t = func_0011BA18(2);
        func_0010C7E8(0, t, func_0011BA18(3), 0);
        func_00135A50();
        return 1;
    }
    return 0;
}
