typedef struct { s32 n; u8 pad[0x204]; s32 buf[10]; } G64A0;
extern G64A0 D_010F64A0;
extern void *D_00480488;
extern u8 jtbl_004C006C[];
void func_00197BC4(void);
void func_001A24AC(void *, void *, s32);

void func_001972AC(void *src, s32 n) {
    void *f;
    if (n >= 10) {
        f = D_00480488;
        f = *(void **)((u8 *)f + 0xF4);
        ((void (*)(u8 *, s32))f)(jtbl_004C006C + 0xF104, n);
        return;
    }
    func_001A24AC(D_010F64A0.buf, src, n * 4);
    D_010F64A0.n = n;
    func_00197BC4();
}
