void *func_00162E20(s32, void *, void *, s32);
void func_00164FA4(void *);

typedef struct { u64 a; u64 b; } P16;
typedef struct {
    s32 type; s32 pad0; s64 v8;
    s32 f10; s32 pad1; s64 v18;
    s32 f20; s32 pad2; s64 v28;
    char rest[16];
} Cmd;

void func_00164BF0(u8 *p)
{
    Cmd c;
    register long n;
    *(s32 *)(p + 0x4D0) = 2;
    func_00164FA4(p);
    c.type = 0x15;
    n = 0x20;
    c.v8 = 0;
    c.f10 = 0x48;
    c.v18 = *(s32 *)(p + 0x1260);
    *(s32 *)((u8 *)&c + n) = n;
    c.v28 = *(s32 *)(p + 0x538);
    *(void **)(p + 0x910) = func_00162E20(0, p + 0x58, &c, 3);
    if (*(s32 *)(p + 0x538)) {
        void *q = *(void **)(p + 0x4C);
        q = *(void **)((u8 *)q + 0x110);
        ((void (*)(void *))q)(p);
    } else {
        *(P16 *)(p + 0x1250) = *(P16 *)(p + 0x1230);
    }
}
