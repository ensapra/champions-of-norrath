/* identical to func_0017E320 (matched), with its names changed by decompdecomp */
void func_002D1698(void *arg0) {
    extern void func_002D1608(void *, s32);
    func_002D1608(arg0, -0x21C);
}

s32 func_0017DE30(void);
s32 func_0017DEE8(void);
void func_002D1608(void *, s32);

void func_0017E328(void *arg0) {
    s32 v1;
    s32 v0;
    v1 = func_0017DE30();
    v0 = func_0017DEE8();
    func_002D1608(arg0, v1 + v0 * 0x3C - 0x21C);
}

void func_0017E008(void *arg0);
void func_0017E070(void *arg0);
void func_0017E238(void *arg0);
void func_0017E268(void *arg0);

void func_002D1608(void *arg0, s32 arg1) {
    u8 *p = arg0;
    s32 var16;
    
    func_0017E008(arg0);
    var16 = p[2] + arg1;
    if (var16 < 0) {
        do {
            func_0017E268(arg0);
            var16 += 0x3C;
        } while (var16 < 0);
        p[2] = var16;
    } else if (var16 >= 0x3C) {
        do {
            var16 -= 0x3C;
            func_0017E238(arg0);
        } while (var16 >= 0x3C);
        p[2] = var16;
    } else {
        p[2] = var16;
    }
    func_0017E070(arg0);
}

void func_0017E190(void *arg0);

void func_0017E268(void *arg0) {
    u8 *p = arg0;
    u8 t = p[3];
    if (t == 0) {
        func_0017E190(arg0);
    } else {
        p[3] = t - 1;
    }
}
