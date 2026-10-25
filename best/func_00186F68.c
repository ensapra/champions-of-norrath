typedef struct Ent { s32 f0, f4, f8; u16 fC, fE; } Ent;
typedef struct Disp {
    u8 pad0[0xE0];
    s32 (*f0E0)();
    u8 pad1[0x118 - 0xE4];
    void (*f118)(void);
    void (*f11C)(s32, s32, void *, void *, s32);
    u8 pad2[0x128 - 0x120];
    void (*f128)(s32, void *, s32, s32);
} Disp;
extern s32 D_00362CC8[];
extern u8 func_01000000[];
extern Ent D_004CDE50[];
extern Ent D_004CDE90[];
extern u8 D_004CDDF0[];
extern u8 D_004CDDC0[];
#define DD ((Disp *)D_00362CC8[0])

void func_00186F68(s32 arg0, s32 arg1) {
    s32 sp[4];
    Ent *e;
    u8 *q;
    s32 i = 2;
    s32 *G = (s32 *)(func_01000000 + 0xF44A8);
    DD->f118();
    e = D_004CDE50;
    q = D_004CDDF0;
    do {
        s32 r;
        sp[0] = e->f0 + G[0x80 / 4];
        r = DD->f0E0(e->f4, DD);
        sp[1] = r + G[0x84 / 4];
        sp[2] = 0;
        ((u16 *)sp)[6] = e->fC;
        ((u16 *)sp)[7] = DD->f0E0(e->fE);
        e++;
        DD->f11C(arg0, 0x80808080, sp, q, arg1);
        q += 8;
    } while (--i >= 0);
    e = D_004CDE90;
    {
        s32 r;
        sp[0] = e->f0 + G[0x80 / 4];
        r = DD->f0E0(e->f4, DD);
        sp[1] = r + G[0x84 / 4];
        sp[2] = 0;
        ((u16 *)sp)[6] = e->fC;
        ((u16 *)sp)[7] = DD->f0E0(e->fE);
        DD->f11C(arg0, 0x80808080, sp, D_004CDDC0, arg1);
    }
    DD->f128(arg0, sp, 0, 0x80808080);
}
