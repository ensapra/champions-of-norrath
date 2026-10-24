typedef struct { u8 b0; u8 b1; u8 b2; u8 b3; } T;
void func_0017E008(T *);
void func_0017E070(T *);
void func_0017E190(T *);
void func_0017E238(T *);
void func_0017E268(T *);

void func_0017E268(T *t){
    if (t->b3 == 0) {
        t->b3 = 23;
        func_0017E190(t);
    } else {
        t->b3--;
    }
}

void func_0017E290(T *t, s32 d){
    s32 v;
    func_0017E008(t);
    v = t->b2 + d;
    if (v < 0) {
        do { v += 60; func_0017E268(t); } while (v < 0);
    } else if (v >= 60) {
        do { v -= 60; func_0017E238(t); } while (v >= 60);
    }
    t->b2 = v;
    func_0017E070(t);
}

s32 func_0017DE30(void);
s32 func_0017DEE8(void);
void func_0017E328(T *t){
    s32 a = func_0017DE30();
    func_0017E290(t, a + func_0017DEE8() * 60 - 0x21C);
}

void func_0017E320(T *t){ func_0017E290(t, -0x21C); }
