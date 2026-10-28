extern s32 D_00486890;
extern s32 D_004FC0C0[];
extern s32 D_0050A1C0[];

typedef struct {
    s32 x0;
    s32 x4;
    s32 x8;
    s32 flags;
    f32 x;
    f32 y;
} Obj143;

s32 func_00194390(void *, void *, void *);

s64 func_00143720(Obj143 *o) {
    s32 *p;
    s32 a = ((s32)o->x + 0x3C00) >> 8;
    s32 b = ((s32)o->y + 0x3C00) >> 8;
    if (!(o->flags & 2) && a >= 0 && a < 0x78 && b >= 0 && b < 0x78) {
        if (o->flags & 0x800) {
            p = &D_0050A1C0[b * 120 + a];
        } else {
            p = &D_004FC0C0[b * 120 + a];
        }
    } else {
        p = &D_00486890;
    }
    return func_00194390(p, &o->x8, o);
}
