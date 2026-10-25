/* identical to func_0017E290 (matched), with its names changed by decompdecomp */
typedef struct { u8 b0; u8 b1; u8 b2; u8 b3; } T;
void func_002D1380(T *);
void func_002D13E8(T *);
void func_0017E190(T *);
void func_002D15B0(T *);
void func_002D15E0(T *);

void func_002D15E0(T *t){
    if (t->b3 == 0) {
        t->b3 = 23;
        func_0017E190(t);
    } else {
        t->b3--;
    }
}

void func_002D1608(T *t, s32 d){
    s32 v;
    func_002D1380(t);
    v = t->b2 + d;
    if (v >= 0) {
        while (v >= 60) { v -= 60; func_002D15B0(t); }
    } else {
        do { v += 60; func_002D15E0(t); } while (v < 0);
    }
    t->b2 = v;
    func_002D13E8(t);
}

s32 func_0017DE30(void);
s32 func_0017DEE8(void);
void func_0017E328(T *t){
    s32 a = func_0017DE30();
    s32 b = func_0017DEE8() * 60 - 0x21C;
    func_002D1608(t, a + b);
}

void func_0017E320(T *t){ func_002D1608(t, -0x21C); }
