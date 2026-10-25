typedef struct { s64 a __attribute__((packed)); s32 b; } L12;
extern s32 D_0044E940[];
extern s32 func_00221118(void *, s32, void *, s16);
extern void *func_001441B8(s32);
extern void func_00222A40(void *, void *, s32);
void func_00225518(u8 *self, s32 a1, void *src, s16 s, s32 a4) {
    L12 loc;
    void *t;
    loc = *(L12 *)src;
    func_00221118(self, a1, &loc, s);
    *(void **)(self + 0x48) = D_0044E940;
    t = func_001441B8(0x184);
    if (t) func_00222A40(t, &loc, a4);
    *(void **)(self + 0x148) = t;
}
