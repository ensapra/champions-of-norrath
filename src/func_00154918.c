extern void func_001C8098();
void func_00154918(void)
{
    void *p = (char *)func_001C8098;
    p = *(void **)((char *)p + 0xD68);
    ((void (*)(void))p)();
}

s32 func_001A4174(s32);
void func_0011B9E0(s32);
s32 func_0016FA70(s32);

void func_00154BB4(char *a, s32 b) {
    s32 t;
    t = *(s32 *)(a + 0x924);
    if (t == 0) {
        if (b == 0) return;
    } else if (b != 0) {
        if (func_001A4174(t) == 0) return;
    }
    t = *(s32 *)(a + 0x924);
    if (t != 0) {
        func_0011B9E0(t);
    }
    if (b == 0) {
        *(s32 *)(a + 0x924) = 0;
    } else {
        *(s32 *)(a + 0x924) = func_0016FA70(b);
    }
    *(s32 *)(a + 0x98) = 2;
}

typedef struct { s32 a, b, c; u16 d; } Buf155040;
s32 func_00152C8C(s32, Buf155040 *);
void func_001A2850(char *);
extern char D_004CB530[];

s32 func_00155040(char *a, s32 b) {
    Buf155040 buf;
    s32 v;
    u32 t;
    if (func_00152C8C(b, &buf) == -1) {
        func_001A2850(D_004CB530);
    }
    t = buf.d;
    if (b < 128) {
        v = (s16)t + *(s32 *)(a + 0x9AC);
    } else {
        v = (s16)t;
    }
    return (s32)((f32)v * *(f32 *)(a + 0x9B8));
}

s32 D_0047FD4C;
s32 D_0047FFB4;
s32 func_0014B41C(s32, s32);
void func_0015BFA0(s32, s32);

void func_00155104(char *a, s32 b, s32 c) {
    char *head, *n;
    s32 cnt;
    if (D_0047FD4C == 0) {
        head = a + 0x840;
        cnt = *(s32 *)(a + 0x854);
        D_0047FD4C = 1;
        n = head;
        if (cnt != 0 && *(char **)(head + 8) != head) {
            do {
                n = *(char **)(n + 8);
                if (b != *(s32 *)(n + 0x10) && *(s32 *)n != 0 && func_0014B41C(*(s32 *)(n + 0x10), D_0047FFB4) != 0) {
                    func_0015BFA0(*(s32 *)(n + 0x10), c);
                }
            } while (*(char **)(n + 8) != head);
        }
        D_0047FD4C = 0;
    }
}
