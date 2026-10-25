typedef struct {
    u8 b[0x10];
} Quad;

typedef struct {
    u8 pad0[0x48];
    s32 state;
    u8 pad4C[0x83 - 0x4C];
    u8 alpha;
    u8 pad84[0xC];
    Quad quads[4];
    u8 padD0[0x10];
    s32 unkE0;
    u8 padE4[0xC];
    s32 unkF0;
    s32 mode;
    s32 unkF8;
} Item199;

typedef struct {
    u8 pad[0x118];
    void (*begin)(s32, s32);
    void (*draw)(s32, u32, Quad *, void *, s32);
} DrawTbl;

extern DrawTbl *D_00480488;
extern u8 jtbl_004C006C[];
s32 func_00199E30(Item199 *, s32, void *);
void func_00194CD8(void *, Quad *, s32);

void func_00199C88(s32 ctx, Item199 *it, s32 arg2) {
    u8 buf[16];
    s32 d;
    s32 i;
    u32 color;

    it->state = -1;
    if (it->mode == 0x11) {
        func_00199E30(it, 10, buf);
        func_00194CD8(buf, it->quads, it->unkE0);
        it->state = 1;
    } else if (it->mode == 0x10) {
        d = it->unkF8 - it->unkF0;
        switch (d) {
        case 0:
            func_00199E30(it, 4, buf);
            it->state = 0;
            break;
        case 1:
            func_00199E30(it, 5, buf);
            it->state = 2;
            break;
        case 3:
            if (func_00199E30(it, 2, buf) != 0)
                func_00199E30(it, 3, buf);
            it->state = d;
            break;
        }
        func_00194CD8(buf, it->quads, it->unkE0);
    }
    color = (it->alpha << 24) | 0x808080;
    D_00480488->begin(ctx, arg2);
    for (i = 0; i < 4; i++) {
        D_00480488->draw(ctx, color, &it->quads[i], jtbl_004C006C + 0xF2C4 + i * 8, arg2);
    }
}
