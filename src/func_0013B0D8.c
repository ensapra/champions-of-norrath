extern s32 func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
extern s32 func_001671F8(void *);
extern s32 func_001C2378(s32, s32, s32);
extern void func_001D3AB0(void *, s32);
extern s32 func_001D39C0(void *);
extern void *func_00165DC0(void *, void *);
extern void func_0024C6A8(void *, s32, f32, f32, f32);

s32 func_0013AEA8(s32 arg0, s32 *arg1) {
    struct { char b0[0xA0]; char b1[0xA0]; void *s; } l;
    s32 t1;

    func_00138758((void *)arg0, arg1[1], &l.s);
    func_00138900(l.b0, l.s);
    func_00138758((void *)arg0, arg1[2], &l.s);
    func_00138900(l.b1, l.s);
    t1 = func_001671F8(l.b0);
    func_001C2378(-1, t1, func_001671F8(l.b1));
    return 0;
}

typedef struct Sub Sub;
typedef struct Obj Obj;
struct Sub { u8 _p34C[0x34C]; f32 unk34C; u8 _p90C[0x90C - 0x350]; f32 unk90C; };
struct Obj { u8 _pC[0xC]; s32 unkC; u8 _p530[0x530 - 0x10]; Sub *unk530; };

extern u8 D_00408600[];
extern s32 D_00484538;

s32 func_0013AD08(void) {
    f32 f1 = 0.0f;
    if (D_00484538 > 0) {
        s32 i = D_00484538;
        u8 *base = D_00408600;
        Obj **p = (Obj **)(base + 0x5570);
        Obj *obj = *p;
        for (;;) {
            p = (Obj **)((u8 *)p + 0x5DB0);
            if (obj != NULL && !(obj->unkC & 8)) {
                Sub *sub = obj->unk530;
                if (sub != NULL && f1 < sub->unk90C) {
                    f1 = sub->unk34C;
                }
            }
            if (--i == 0)
                break;
            obj = *p;
        }
    }
    return (s32)(f1 * 128.0f);
}

s32 func_0013B080(void *arg0, s32 *arg1) {
    void *s;
    char buf[0xA0];
    s32 v;

    func_00138758(arg0, arg1[1], &s);
    func_00138900(buf, s);
    v = func_001D39C0(buf) + arg1[2];
    func_001D3AB0(buf, v);
    return v;
}

s32 func_0013B0D8(void *arg0, s32 *arg1) {
    struct { char b0[0xA0]; char b1[0xA0]; void *s; } l;
    void *p;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.b0, l.s);
    func_00138758(arg0, arg1[2], &l.s);
    func_00138900(l.b1, l.s);
    p = func_00165DC0(l.b0, l.b1);
    if (p != NULL) {
        func_0024C6A8(p, 0, 1.0f, 1.0f, 0.0f);
    }
    return 0;
}
