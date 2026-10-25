typedef struct { u64 z; s32 id; s32 pad; s32 cnt; void *pool; } St;
extern St D_004C4F50;
extern u8 D_0110B480[];
s32 AddIntcHandler_2(s32, void *, s32, s32);
void func_001A2660(void *, s32, s32);
void func_001AE268(s32);
s32 func_001B5C80(void);
void func_001B5CD8(void);
void func_001B6550(s32);
void func_001B6560(s32);
void func_001B6570(s32);
void func_001B7848(void);
void func_001B6B20(void);

s32 func_001B6580(s32 arg0) {
    s32 id, lk, v, n;
    void **p;
    u8 *q;
    u8 *buf;
    if (D_004C4F50.id >= 0) return 0x80008001;
    D_004C4F50.z = 0;
    D_004C4F50.cnt = 0;
    buf = D_0110B480;
    func_001A2660(buf, 0, 0x2000);
    D_004C4F50.pool = buf;
    q = buf + 0x2000;
    p = (void **)(buf + 0x1FC0);
    for (n = 0x7F; n >= 0; n--) {
        *p = q;
        p -= 0x10;
        q -= 0x40;
    }
    *(s32 *)(buf + 0x1FC0) = 0;
    func_001B7848();
    id = AddIntcHandler_2(0xB, func_001B6B20, 0, 0);
    if (id < 0) return 0x80009021;
    D_004C4F50.id = id;
    lk = func_001B5C80();
    v = (*(s32 *)0x10001010 & 0xFFFFFFFC) | arg0 | 0x300;
    if (!(v & 0x80)) {
        func_001B6550(0);
        v |= 0xC80;
        func_001B6570(0xFFFF);
    }
    func_001B6560(v);
    func_001AE268(0xB);
    if (lk) func_001B5CD8();
    return 0;
}
