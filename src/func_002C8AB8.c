s32 D_00483F30;
typedef struct { volatile u8 b0; u8 b1, b2; u8 b3; u8 b4; u8 pad[7]; } S88B8;
extern S88B8 D_008D88B8;
extern u8 D_008D8938[1008];
void func_003021B0(void *, s32, s32);
void func_002CB388(void) {
    s8 *base;
    s8 *p;
    s32 i;
    if (D_00483F30 == 0) {
        base = (s8 *)D_008D8938;
        func_003021B0(base, 0, 0x3F0);
        p = base + 0x374;
        D_008D88B8.b4 = 0;
        D_008D88B8.b1 = 0;
        D_008D88B8.b3 = 0x20;
        D_008D88B8.b0 = 1;
        i = 7;
        do {
            i--;
            *p = -2;
            p -= 0x7E;
        } while (i >= 0);
    }
}

extern s32 func_00165DC0(char *, char *);
extern void func_00172708(s32, s32, s32, s32, u32);
s32 D_004844A4;
s32 D_004866C0;
extern char D_0047ABA8[];
extern char D_0047ABB8[];
extern char D_0047ABD0[];
typedef struct { u8 pad[0xC]; s32 fC; u8 pad2[0x54]; s32 f64; } S34BEB8;
extern S34BEB8 D_0034BEB8;

s32 func_002CD7D8(void) {
    s32 r;
    S34BEB8 *s;
    func_00172708(func_00165DC0(D_0047ABA8, D_0047ABB8), 0xC0, 0x14A, 3, 0x80808080);
    func_00172708(func_00165DC0(D_0047ABA8, D_0047ABD0), 0x40, 0x32, 3, 0x80808080);
    s = &D_0034BEB8;
    r = 1;
    if (D_004844A4 < 0x12D) {
        if (s->f64 | s->fC) {
            D_004866C0 = 1;
            r = 1;
        } else {
            r = 0;
        }
    }
    return r;
}

void func_002C8B58(void *arg0, s32 arg1) {
    char *p = (char *)(*(s32 *)((char *)arg0 + 0x60)) + 0x80;
    void (*fn)(void *, s32, s32) = *(void (**)(void *, s32, s32))(p + 4);
    fn((char *)arg0 + *(s16 *)p, arg1, 0);
}

typedef struct { s32 f0; s32 f1; s32 f2; } T12;
s32 func_001441B8(s32);
void func_002C7F38(s32, s32, s32, void *);

s32 func_002C8AB8(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    T12 tmp = *(T12 *)arg3;
    char *p = (char *)(*(s32 *)((char *)arg0 + 0x60)) + 0x78;
    s32 (*fp)(void *, s32, s32) = *(s32 (**)(void *, s32, s32))(p + 4);
    s32 r = fp((char *)arg0 + *(s16 *)p, arg1, 0);
    s32 obj = func_001441B8(0x28);
    if (obj != 0) {
        func_002C7F38(obj, r, arg2, arg0);
    }
    return obj;
}
