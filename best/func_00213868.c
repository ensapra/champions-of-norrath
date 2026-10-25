typedef s32 (*Fn)();
typedef struct Obj Obj;
struct Obj {
    u8 pad0[0x10]; f32 x, y, z;
    u8 pad1[0x48 - 0x1C]; char *vt;
    u8 pad2[0x50 - 0x4C]; s32 f50;
    u8 pad3[0x60 - 0x54]; s32 f60, f64; s8 f68; u8 pad4; s16 f6A;
};
s32 D_004844A4;
void func_0013EF30(f32 *, f32 *, Obj **, s32);
s32 func_00153FA8(Obj *);
s32 func_002FD2E0(s32, s32);
void func_002FF3C8();
s32 func_00311DC8();
s32 func_00213868(Obj *o, s16 n);

s32 func_00213868(Obj *o, s16 n) {
    Obj *list[16];
    f32 lo[3];
    f32 hi[3];
    s32 cnt;
    s32 r;
    o->f6A = n;
    o->f60 = D_004844A4;
    if (o->f68) {
        o->f64 = D_004844A4;
        return 1;
    }
    lo[0] = o->x - 156.0f;
    lo[1] = o->y - 156.0f;
    lo[2] = o->z - 60.0f;
    hi[0] = o->x + 156.0f;
    hi[1] = o->y + 156.0f;
    hi[2] = o->z + 60.0f;
    func_0013EF30(lo, hi, list, 16);
    for (;;) {
        Obj **p = list;
        Obj **w = list;
        cnt = 0;
        if (list[0]) {
            do {
                Obj *e = *p;
                if (e != o) {
                    s32 v;
                    s32 ok;
                    if (e) v = (*(Fn *)(e->vt + 4))();
                    else { func_002FF3C8(); }
                    ok = func_002FD2E0(v, func_00311DC8()) ^ 1;
                    if (ok == 0 && e->f60 != D_004844A4 && e->f50 == 0) {
                        cnt++;
                        *w = *p;
                        w++;
                    }
                }
                p++;
            } while (*p);
        }
        r = 0;
        if (cnt == 0) break;
        r = func_00213868(list[func_00153FA8(o) % cnt], o->f6A + 1);
        if (r) { o->f64 = D_004844A4; break; }
    }
    return r;
}
