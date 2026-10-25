void func_003021B0(void *, s32, s32);
typedef struct { s32 w0; s16 id; s16 p6; s32 w8; s32 wC; } Hdr;
typedef struct {
    Hdr h;
    s32 f10;
    char p14[8];
    s32 f1C;
    s16 f20;
    s16 f22;
    s16 f24;
    s16 f26;
    char p28[0xB8];
    char bufE0[0x20];
    s32 f100;
    char buf104[8];
    char p10C[4];
} Ent;
typedef struct {
    char p0[0x40];
    s32 count;
    char p44[0x20];
    s32 f64;
    char p68[0x20];
    Ent ent[1];
} Tbl;
extern Tbl D_008EBDD8;

s32 func_002E7CE8(Hdr *arg0) {
    s32 i;
    Ent *e;
    for (i = 0; i < D_008EBDD8.count; i++) {
        if (D_008EBDD8.ent[i].h.id == arg0->id) return 1;
    }
    for (i = 0; i < D_008EBDD8.count; i++) {
        if (D_008EBDD8.ent[i].h.id == -1) break;
    }
    if (i < D_008EBDD8.count) {
        e = &D_008EBDD8.ent[i];
        e->h = *arg0;
        e->f100 = 0;
        func_003021B0(e->buf104, 0, 8);
        e->f26 = 0;
        e->f24 = 0;
        func_003021B0(e->bufE0, 0, 0x20);
        e->f10 = 0;
        e->f1C = 1;
        D_008EBDD8.f64 = 1;
        return 0;
    }
    return 1;
}
