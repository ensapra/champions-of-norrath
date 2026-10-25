extern "C" {
struct Vec { f32 x, y, z; };
struct Pos { char p[0x10]; Vec pos; };
struct Ent { char p[0x5570]; Pos *pos; char q[0x5DB0 - 0x5574]; };
struct Obj { char p0[0x10]; Vec pos; char p1[0x31]; s8 f4D; char p2; s8 f4F; };
extern char D_00476B90[];
extern char D_00476BE8[];
extern char D_00476C00[];
extern char D_00476C10[];
extern char D_00476C28[];
extern char D_00486068[];
extern Ent D_00408600[];
extern s32 D_0042A3E8[];
s32 D_00484F44;
s8 D_00486DA0;
s32 func_00143A80(Obj *, char *, s32);
s32 func_001671F8(char *);
s32 func_001915C0(char *);
void func_001C7600(s32, s32, s32, s32);
s32 func_001D3E88(s32);
void func_002846F8(void);
void ovl_ntgui2_func_00191830(s32, s32);
s32 func_002830D8(Obj *o, s32 a, s32 idx) {
    s32 i;
    if (o->f4F == 0) {
        if (func_001915C0(D_00476B90)) return 0;
        if (func_00143A80(o, D_00486068, 0)) {
            s32 r = func_001D3E88(func_00143A80(o, D_00486068, 0));
            if (r == 0) return r;
        }
        if (o->f4D == 0) {
            o->f4D = 1;
            func_002846F8();
            func_001C7600(func_001671F8(D_00476BE8), 0xB4, D_0042A3E8[idx], 0);
        }
        if (D_00486DA0 == 1) {
            ovl_ntgui2_func_00191830(a, func_001671F8(D_00476C00));
            return 0;
        } else {
            Vec *p = &o->pos;
            for (i = 0; i < D_00484F44; i++) {
                if (i != idx) {
                    Vec *q = &D_00408600[D_0042A3E8[i]].pos->pos;
                    f32 dx = p->x - q->x;
                    f32 dy = p->y - q->y;
                    f32 dz = p->z - q->z;
                    if (dx * dx + dy * dy + dz * dz > 9216.0f) {
                        ovl_ntgui2_func_00191830(a, func_001671F8(D_00476C10));
                        return 0;
                    }
                }
            }
            ovl_ntgui2_func_00191830(a, func_001671F8(D_00476C28));
            return 1;
        }
    }
    return 0;
}
}
