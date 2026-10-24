s32 func_00224AB8(void *src, u8 *dst) {
    u8 *orig_dst = dst;
    *(s32 *)dst = *(s32 *)((char *)src + 0xC8);
    dst += 4;
    *(u16 *)dst = *(u16 *)((char *)src + 0xDC);
    dst += 2;
    *dst++ = *(u8 *)((char *)src + 0xE4);
    *dst++ = *(u8 *)((char *)src + 0xE5);
    *(s32 *)dst = *(s32 *)((char *)src + 0xD8);
    dst += 4;
    return dst - orig_dst;
}

typedef struct { s16 delta; s16 index; void (*fn)(void *, ...); } VEnt;
typedef struct {
    u8 p0[0x48];
    VEnt *vt;
    u8 p1[0xD4];
    s32 f11C;
    s32 f120;
} Obj;

void func_00224E78(Obj *o) {
    if ((o->f11C & 0x10) && o->f120 != 0) {
        VEnt *e = &o->vt[0x11];
        e->fn((char *)o + e->delta);
    }
}

void func_00143830(void *);
typedef struct {
    u8 p0[0xC];
    s32 flags;
    u8 p1[0x120];
    s32 f130;
    u8 p2[8];
    s32 f13C;
} Obj2;

s32 func_00224FC8(Obj2 *o, s32 *p) {
    s32 *start = p;
    s32 v;
    p++;
    v = p[-1];
    o->f13C = v;
    if (v == 2) {
        o->f130 = 0xB4;
        o->flags &= 0xFFEFFFFF;
        func_00143830(o);
    }
    return (u8 *)p - (u8 *)start;
}
