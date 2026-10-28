typedef struct { u32 attr; void *entry; void *stack; s32 size; void *gp; s32 pri; } TP;
typedef struct { s32 w[8]; } TS;
typedef struct { s32 a, b; void *c; s32 d; } Obj;
extern char func_001DC2C0[]; extern char D_0050A1C0[]; extern char func_01000000[];
extern s32 D_001D2328;
s32 func_001849E8(s32, void *, s32);
s32 GetThreadId(void); s32 ReferThreadStatus(s32, void *);
s32 CreateThread(TP *); s32 StartThread(s32, s32);
s32 func_00184D00(s32, s32);
void func_00185248(s32 on) {
    Obj *o = (Obj *)(func_001DC2C0 + 0x10c0);
    TS st; TP tp; s32 t, pr;
    o->c = func_001DC2C0 + 0x10d0;
    o->b = 0; o->a = 0; o->d = 0;
    if (on) {
        func_001849E8(on, o, 500);
        t = GetThreadId();
        ReferThreadStatus(t, &st);
        pr = st.w[6];
        tp.entry = (void *)func_00184D00;
        tp.stack = func_01000000 + 0xf0480;
        tp.size = 0x4000;
        tp.gp = D_0050A1C0 + 0x5830;
        tp.pri = pr + (pr < 126);
        t = CreateThread(&tp);
        D_001D2328 = t;
        if (t == -1) { func_00184D00(t, 0); return; }
        StartThread(t, 0);
    }
}
