typedef struct {
    char pad0[0xC];
    s32 flags;
    char pad10[0x3C];
    f32 level;
    s8 dir;
    s8 active;
} Obj215E28;
extern f32 D_00481598;
extern char D_004853A0[];
extern char D_004853A8[];
extern s32 func_00140F60(void *, char *, s32);
extern void func_00142310(void *, s32);
extern void func_00143878(void);

void func_00215E28(Obj215E28 *o) {
    s32 changed = 0;
    if (o->active) {
        o->level += o->dir * 1.5f * D_00481598;
        if (o->level >= 1.0f) {
            o->level = 1.0f;
            changed = 1;
        }
        if (o->level < 0.0f) {
            o->level = 0.0f;
            changed = 1;
        }
        if (changed) {
            s32 on;
            s32 forced = 0;
            func_00143878();
            o->active = 0;
            on = o->dir == 1;
            if (func_00140F60(o, D_004853A0, 0)) {
                on = 1;
                forced = 1;
            }
            if (func_00140F60(o, D_004853A8, 0)) {
                on = 0;
                forced = 1;
            }
            func_00142310(o, on);
            o->dir *= -1;
            if (!forced) {
                o->flags |= 0x100000;
            }
        }
    }
}
