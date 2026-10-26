extern s32 D_004CE264[];
extern s32 func_00189A58();
extern s64 func_00189BC8();
extern s32 func_00189C30();

typedef struct {
    u8 pad0[0xC];
    u16 off;
    u8 padE[3];
    u8 cnt;
    u8 pad12;
    u8 type;
    u16 w;
    u16 h;
    u64 bits;
    u8 pad20[0x10];
    u64 a;
    u64 b;
    s32 tbl[1];
} Obj;

#define M1 ((s32)0xFC0FFFFF)
#define M2 ((s32)0xFFF03FFF)

s32 func_00188FF0(Obj *o, s32 pos) {
    s32 i, *tp, w, h;
    s32 inv = -1;
    u64 *p;
    u8 *base;
    s64 t;
    if (o->cnt != 0) {
        t = D_004CE264[o->type];
        o->bits = (o->bits & M1) | ((u64)(t & 0x3F) << 20);
        base = (u8 *)o + o->off;
        w = o->w;
        h = o->h;
        if (pos == inv) {
            pos = o->bits & 0x3FFF;
            func_00189A58(t, pos, (s32)((o->bits >> 14) & 0x3F), w, h, base);
        } else {
            s64 r = func_00189BC8(t, w, inv);
            s64 lo = pos & 0x3FFF;
            o->bits = (((o->bits & ~0x3FFF) | lo) & M2) | ((u64)(r & 0x3F) << 14);
            func_00189A58(t, pos, r, w, h, base);
            pos += func_00189C30(t, w, h);
        }
        if (o->cnt >= 2) {
            p = &o->a;
            if (pos != inv) {
                p[0] = 0;
                p[1] = 0;
            }
            base = (u8 *)o + o->off;
            tp = &o->tbl[0];
            for (i = 1; i < o->cnt; i++) {
                s32 tv = *tp++;
                w = w / 2;
                h = h / 2;
                base += tv;
                if (pos == inv) {
                    u64 v;
                    s32 s1, s2;
                    if (i < 4) { v = p[0]; s1 = (i - 1) * 20; s2 = i * 20 - 6 - 20; }
                    else { v = p[1]; s1 = i * 20 - 0x50 - 20 + 20; s2 = i * 20 - 0x42; }
                    func_00189A58(t, (s32)((v >> s1) & 0x3FFF), (s32)((v >> s2) & 0x3F), w, h, base);
                } else {
                    s64 r = func_00189BC8(t, w, tv, w, h, base);
                    u64 u = (u32)pos;
                    if (i < 4) p[0] = p[0] | (u << (i * 20 - 0x14)) | (r << (i * 20 - 6));
                    else p[1] = p[1] | (u << (i * 20 - 0x50)) | (r << (i * 20 - 0x42));
                    func_00189A58(t, pos, r, w, h, base);
                    pos += func_00189C30(t, w, h);
                }
            }
        }
    }
    return pos;
}
