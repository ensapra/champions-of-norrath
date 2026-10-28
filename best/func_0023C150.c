typedef struct { s32 w[3]; } C12;
typedef struct {
    u8 p0[0xC]; s32 flags; u8 p1[0x38]; void *vt; s32 f4c; s32 f50; s32 f54; s32 f58; s32 f5c; s32 f60; s32 f64;
} O;
extern void *D_0044F918[], *D_0044F9A8[];
extern s32 D_004844A4;
s32 func_001411F0(O *, C12 *, s32, s32);
s32 func_00180260(void);
void func_00143830(O *);
void func_00194390(void *, s32, s32);
void func_0023C150(O *o, C12 p, s32 x, s32 y) {
    C12 v = p;
    s32 *q;
    func_001411F0(o, &v, 0, 0);
    o->flags |= 9;
    o->vt = D_0044F9A8;
    o->f54 = func_00180260();
    o->f50 = D_004844A4 + 0x3C;
    func_00143830((o->f4c = 0, o));
    q = &o->f64;
    o->f58 = x;
    o->f60 = 0;
    o->vt = D_0044F918;
    func_00194390((*q = 0, q), y, y);
    o->f5c = 0;
}
