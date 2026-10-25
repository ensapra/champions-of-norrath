extern "C" {
void *func_00143D10(s32);
void func_00143878(void *);
void func_001637A8(void *);
void func_00163830(void *, void *, s32);
void func_00163BA0(void *);
s32 func_002FD2E0(void *, s32);
void func_002FF3C8(void) __attribute__((noreturn));
s32 func_003044FC(void *, void *);
s32 func_0030F408(void);
}

class Obj {
public:
    char pad[0x48];
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void Vc0();
    virtual void Vc8();
};

#define F(T, off) (*(T *)((char *)o + (off)))
#define TAB F(u32, 0x24)
#define AT(off) (*(void **)((u32)(off) + TAB))

extern "C" s32 func_00111B90(Obj *o, char *p) {
    char *start = p;
    p += 4;
    F(s32, 0xF4) = *(s32 *)(p - 4);
    p += 4;
    F(f32, 0x230) = (f32)*(s32 *)(p - 4);
    p += 4;
    F(void *, 0x37C) = func_00143D10(*(s32 *)(p - 4));
    o->Vc8();
    if (F(f32, 0x230) <= 0.0f) {
        s32 i;
        void *r;
        void *r2;
        F(s16, 0x23C) = 10;
        F(s32, 0xC) |= 0x2009;
        p += 4;
        func_00143878(o);
        r = func_00143D10(*(s32 *)(p - 4));
        if (r) {
            void *q;
            s32 off;
            i = 1;
            do {
                off = i << 3;
                i++;
                q = AT(off);
            } while (q && func_003044FC(q, r));
            if (q && AT(off)) {
                void *rr = &F(char, 0x120);
                func_001637A8(rr);
                func_00163830(rr, *(void **)((u32)off + TAB + 4), 4);
                func_00163BA0(rr);
                o->Vc0();
                r = rr;
            }
        }
        if (o) r2 = ((void *(*)(void))((void **)*(void ***)((char *)o + 0x48))[1])();
        else func_002FF3C8();
        if (func_002FD2E0(r2, func_0030F408())) F(s8, 0x28) = 0x46;
    }
    if ((s32)(F(u64, 0xA0) & 1)) {
        f32 t;
        s32 v;
        p += 4;
        t = (f32)*(s32 *)(p - 4);
        p += 4;
        v = *(s32 *)(p - 4);
        F(s8, 0x4C) = v;
        F(f32, 0x234) = t;
    }
    {
        s32 c;
        p += 1;
        c = *(s8 *)(p - 1);
        F(s8, 0x23A) = c;
    }
    p += 1;
    {
        s8 b = *(s8 *)(p - 1);
        if (b & 1) F(u64, 0xA0) |= 0x1000000;
        if (b & 2) F(u64, 0xA0) |= 0x100000000LL;
        if (b & 4) F(u64, 0xA0) |= 0x400000;
        if (b & 8) F(u64, 0xA0) |= 0x800000;
    }
    p += 2;
    return p - start;
}
