typedef struct Obj Obj;
struct Obj {
    u8 p0[0x20];
    void (*f20)(Obj *, void *);
    void (*f24)(Obj *, void *);
    void (*f28)(Obj *, void *);
    u8 p2c[0x3C - 0x2C];
    void (*f3C)(Obj *, s32);
    u8 p40[0xE4 - 0x40];
    s32 mode;
};
typedef struct {
    u8 b0;
    u8 flag;
    u8 p2[0x24 - 2];
    void (*f24)(s32);
    void (*f28)(s32);
    u8 p2c[0xD8 - 0x2C];
    u32 maxx;
    u32 maxy;
} G;
typedef struct {
    u8 p[0xAE0];
    s32 flags;
    s32 pad;
    s32 x;
    s32 y;
} Pos;
extern Pos D_010F64A0;
extern u8 D_010F6F88[];
extern u8 D_00364290[];
extern u8 D_004CF040[], D_004CF098[], D_004CF1D0[];
G *D_00480488;
s32 D_00480498;
s32 D_0048049C;
extern s32 func_00198800(Obj *, s32 *);
extern void func_001A1568(void *, s32, void *);

void func_0019763C(Obj *o, s8 *a) {
    s32 r, b, nx, ny;
    s8 m;
    if (o == NULL) func_001A1568(D_004CF040, 0x20F, D_004CF098);
    if (a == NULL) func_001A1568(D_004CF040, 0x210, D_004CF1D0);
    if (D_00364290[0] == 0) return;
    if (o->mode == 0 || o->mode == 2 || o->mode == 3) return;
    if (*(u16 *)D_00480488 == 0) return;
    if (a[0] == 0) return;
    m = a[1];
    nx = D_010F64A0.x + a[2];
    ny = D_010F64A0.y + a[3];
    D_010F64A0.x = nx;
    D_010F64A0.y = ny;
    b = m & 1;
    if (nx < 0) D_010F64A0.x = 0;
    if (ny < 0) D_010F64A0.y = 0;
    if (D_00480488->maxx < D_010F64A0.x) D_010F64A0.x = D_00480488->maxx;
    if (D_00480488->maxy < D_010F64A0.y) D_010F64A0.y = D_00480488->maxy;
    if (D_00480488->flag != 0) {
        if (b) {
            D_00480488->flag = 0;
            D_00480488->f24(0);
            o->f3C(o, 1);
            return;
        }
    } else if (b) {
        r = func_00198800(o, &D_010F64A0.x);
        if (r == 0xF) {
            o->f24(o, &D_010F64A0.x);
        } else if (D_0048049C == 0) {
            D_00480498 = r;
            D_0048049C = 0;
        } else {
            D_00480498 = ((D_00480498 ^ r) != 0) ? 0xF : D_00480498;
        }
        D_010F64A0.flags |= 1;
        goto done;
    }
    if (D_010F64A0.flags & 1) {
        r = func_00198800(o, &D_010F64A0.x);
        if (r == 0xF) {
            o->f28(o, &D_010F64A0.x);
        } else {
            if (D_00480498 == r) D_00480488->f28(r);
            D_0048049C = 0;
        }
        D_010F64A0.flags &= ~1;
    }
done:
    o->f20(o, D_010F6F88);
}
