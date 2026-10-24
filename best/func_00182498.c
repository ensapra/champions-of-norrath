typedef struct {
    s32 size;
    s32 count;
    s32 unk8;
    u8 *ptr;
} Ring;

void func_001AE898(Ring *r) {
    r->count++;
    r->ptr++;
    if (r->ptr == (u8 *)r + (r->size + 0x10)) {
        r->ptr = (u8 *)r + 0x10;
    }
}

extern u8 func_001D1C80[];
extern u8 jtbl_004C006C[];
void func_0019BC38(s32);
void func_001A2850(void *, s32);

void func_001824D0(void) {
    u8 *p = func_001D1C80 + 0x6C0;
    s32 v = *(s32 *)(p + 0x5C50);
    if (v != -1) {
        func_0019BC38(v);
        *(s32 *)(p + 0x5C50) = -1;
    } else {
        func_0019BC38(5);
    }
    func_001A2850(jtbl_004C006C + 0xD7E4, *(s32 *)(p + 0x5C50));
}

void func_0017FD84(f32);
void func_0017FF20(void *);
void func_00182498(void *a) {
    func_0017FD84(0.73124993f);
    func_0017FF20(a);
}

void func_0017FDE4(s32, s32, s32, s32);
void func_0017FCEC(s32, s32);
void func_0017FF74(s32, s32, s32);
void func_00182418(s32 a, s32 b, s32 c, s32 d) {
    u8 *p = func_001D1C80 + 0x6C0;
    func_0017FDE4(p[0x41C], p[0x41D], p[0x41E], p[0x41F]);
    func_0017FCEC(c, d - *(s32 *)(func_001D1C80 + 0x500));
    func_0017FF74(b, a, 0xC0000);
}
