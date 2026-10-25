typedef struct Ent { char pad[0x10]; f32 pos[3]; } Ent;
typedef struct Actor { char pad0[0x10]; f32 pos[3]; char pad1[0x38 - 0x1C]; s16 ang; char pad2[0x37C - 0x3A]; s32 flag; } Actor;
typedef struct Slot { char pad[0x5570]; Ent *tgt; char pad2[0x5DB0 - 0x5574]; } Slot;
extern char D_00483810[], D_00460850[];
extern Slot D_00408600[];
s32 D_0048453C;
s32 func_00140F60(void *, char *, s32);
s32 func_001D1158(void);
s32 func_001353A8(s32);
void func_001B3B20(s32, s32, s32);
f32 func_0015A070(s16);
f32 func_0015A100(s16);
s32 func_001D38F0(void);
s32 func_00143A80(void *, char *, s32);
void func_001D3E88(s32);

void func_00111DF0(Actor *a, s32 n) {
    f32 d[3];
    f32 v[3];
    f32 *vp = v;
    f32 *ap;
    f32 *tp;
    f32 c, s;
    if (a->flag == 0) return;
    if (D_00408600[n].tgt == 0) return;
    if (func_00140F60(a, D_00483810, 0) != 0 && func_001D1158() != 0) {
        if (func_001353A8(n) != 0) {
            func_001B3B20(n, 0, 1);
        }
        return;
    }
    ap = a->pos;
    tp = D_00408600[n].tgt->pos;
    d[2] = tp[2] - ap[2];
    d[0] = tp[0] - ap[0];
    d[1] = tp[1] - ap[1];
    c = func_0015A070(a->ang);
    s = func_0015A100(a->ang);
    vp[0] = c;
    vp[1] = s;
    vp[2] = 0.0f;
    if (d[0] * vp[0] + d[1] * vp[1] > 0.0f && func_001D38F0() == 0) {
        D_0048453C = n;
        func_001D3E88(func_00143A80(a, D_00460850, 0));
    }
}
