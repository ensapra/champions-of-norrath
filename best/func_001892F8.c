typedef struct { u8 pad0[8]; s32 off8; u16 offC; u16 cntE; u8 pad10[2]; u8 type; u8 sub; u8 pad14[4]; u64 reg; } Obj;
extern char D_004CE280[];
void func_00189A58(s64, s64, s32, s32, u32, void *, ...);
void func_0018E538(s32, s32);
void func_0018E9C0(void *, s32, s32, s32, s32, s32, s32, s32);
void func_0018ECE8(void *, void *);
void func_001A2850(void *, ...);
void FlushCache(s32);

s32 func_001892F8(Obj *o, s64 a1) {
    u8 buf[0x60];
    s64 v;
    u64 r;
    u8 *p;
    s32 t, n, tt;
    if (o->type == 0) return 1;
    tt = o->type & 0x3F;
    if (tt == 1) v = 2;
    else v = (tt == 2);
    r = o->reg;
    r &= 0xFF87FFFFFFFFFFFFULL;
    r |= (u64)v << 51;
    r &= 0xFF7FFFFFFFFFFFFFULL;
    r &= 0xE0FFFFFFFFFFFFFFULL;
    r &= 0xFFFFFFFFFFFFFFFFULL >> 3;
    r |= (u64)0x8000 << 46;
    o->reg = r;
    if (a1 == -1) {
        a1 = (s32)((r >> 37) & 0x3FFF);
    } else {
        o->reg = (r & 0xFFF8001FFFFFFFFFULL) | ((u64)(a1 & 0x3FFF) << 37);
    }
    t = (o->type << 8) | o->sub;
    p = (u8 *)o + o->offC + o->off8;
    switch (t) {
    case 0x4204: case 0x205: case 0x105: case 0x305: case 0x4104: case 0x4304:
        func_00189A58(v, a1, 1, 0x10, o->cntE >> 4, p, v);
        return 1;
    case 0x104: case 0x204: case 0x304: case 0x8104: case 0x8105:
    case 0x8204: case 0x8205: case 0x8304: case 0x8305:
        n = 0;
        if ((o->cntE >> 4) != 0) {
            do {
                s32 q = n;
                n++;
                func_0018E9C0(buf, (s16)a1, 1, (s16)v, (q & 1) * 8, (s16)((q >> 1) * 2), 8, 2);
                FlushCache(0);
                func_0018ECE8(buf, p);
                func_0018E538(0, 0);
                {
                    u8 *p0 = p;
                    p += 0x20;
                    tt = o->type & 0x3F;
                    if (tt != 1) p = (tt ^ 2) ? p0 + 0x40 : p0 + 0x30;
                }
            } while (n < (o->cntE >> 4));
        }
        return 1;
    default:
        func_001A2850(D_004CE280, o->type);
        return 0;
    }
}
