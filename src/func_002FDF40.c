typedef struct VT { s16 adj; s16 pad; s32 (*fn)(void*, s32, s32, s32, s32); } VT;
typedef struct Obj { s32 x; VT *vt; } Obj;
typedef struct Entry { Obj *obj; u32 flags; } Entry;
typedef struct List { s32 p0; s32 p1; Entry *entries; s32 count; } List;
s32 func_002FD2E0(s32, List *);
s32 func_002FDF40(List *a, s32 b, s32 c, s32 d, s32 e) {
    s32 i, r, v, ok;
    u32 f, bit;
    if (d == e && func_002FD2E0(c, a)) return 6;
    i = a->count;
    while (--i != -1) {
        f = a->entries[i].flags;
        bit = (f >> 29) & 1;
        if ((f >> 30) == 1 && (bit == 0 || b != -3)) {
            VT *vt;
            Obj *o;
            s32 off = (s32)(f << 3) >> 3;
            if (d == 0) v = 0;
            else if (bit == 0) v = d + off;
            else v = *(s32 *)(d + off);
            o = a->entries[i].obj;
            vt = (VT *)((char *)o->vt + 0x20);
            r = vt->fn((char *)o + vt->adj, b, c, v, e);
            ok = r >= 4;
            if (ok) return r | ((a->entries[i].flags >> 29) & 1);
        }
    }
    return 1;
}
