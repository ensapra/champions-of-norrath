typedef struct { u8 *data; s32 b; s32 c; s32 cnt; s32 cap; } Src;
typedef struct __attribute__((packed, aligned(4))) { u64 a; u64 b; s32 c; } Vec;
extern char jtbl_004C006C[];
void func_001936E8(Vec *, s32, s32);
void func_00193888(Vec *, void *);
void func_001939EC(Src *, s32);
void func_001A1568(void *, s32, void *);

Vec func_00193C54(Src *s, s32 lo, s32 hi) {
    Vec v;
    s32 i;
    func_001936E8(&v, hi - lo + 1, s->cap);
    for (i = lo; i <= hi; ) {
        u8 *p;
        if (i >= s->cnt) func_001A1568(jtbl_004C006C + 0xEC4C, 0x55, jtbl_004C006C + 0xEC5C);
        if (i < 0) func_001A1568(jtbl_004C006C + 0xEC4C, 0x55, jtbl_004C006C + 0xEC84);
        p = s->data + i * 8;
        func_001939EC(s, i);
        i++;
        func_00193888(&v, p);
    }
    return v;
}
