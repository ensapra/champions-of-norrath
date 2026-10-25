typedef struct { f32 v[4]; } Vtx1874D0;
typedef struct { f32 u, v; } UV1874D0;
typedef struct {
    u16 vtx;
    u16 uv;
    s32 color;
} Prim1874D0;

typedef struct {
    s32 unk0;
    char pad4[0x60 - 4];
    Vtx1874D0 vtx[9];
    UV1874D0 uv[9];
    Prim1874D0 prim[9];
    char pad180[0x2A0 - 0x180];
    u8 alpha;
} Obj1874D0;

typedef struct {
    char pad[0x118];
    void (*begin)(s32, void *);
    void (*draw)(s32, u32, Vtx1874D0 *, UV1874D0 *, void *);
} Disp1874D0;

extern "C" {
extern char D_004CE108[];
extern char D_004CE128[];
extern char D_004CE140[];
extern s32 D_010F4530[];
extern char D_010F4538[];
void func_001A1568(const char *, s32, const char *);
void func_00187858(s32, Obj1874D0 *);

#define DISP1874D0 ((Disp1874D0 *)D_010F4530[0])

void func_001874D0(s32 ctx, Obj1874D0 *o)
{
    s32 i;
    Prim1874D0 *p;
    Vtx1874D0 *vtx;
    UV1874D0 *uv;

    if (ctx == 0) {
        func_001A1568(D_004CE108, 0xD0, D_004CE140);
    }
    if (o == NULL) {
        func_001A1568(D_004CE108, 0xD1, D_004CE128);
    }
    if (o->unk0 == 0) {
        DISP1874D0->begin(ctx, D_010F4538);
        vtx = o->vtx;
        uv = o->uv;
        p = o->prim;
        for (i = 0; i < 9; i++, p++) {
            DISP1874D0->draw(ctx, (((o->alpha * (p->color & 0xFF)) >> 7) << 24) | (p->color & 0xFFFFFF),
                             &vtx[p->vtx], &uv[p->uv], D_010F4538);
        }
        func_00187858(ctx, o);
    }
}
}
