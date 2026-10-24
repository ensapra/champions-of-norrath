typedef struct { s64 q; s32 w; } V3;
typedef struct { s64 q; } __attribute__((packed)) P64;
extern s32 func_001688C8(s32, void *, s16, void *, s32, s32, void *, s32, float);
void func_00235420(void *a, s32 b) {
    V3 v;
    u8 *p = a;
    s32 w = *(s32 *)(p + 0x18);
    v.q = ((P64 *)(p + 0x10))->q;
    v.w = w;
    func_001688C8(*(s32 *)(*(u8 **)(p + 0x24) + 0xC), &v, *(s16 *)(p + 0x38), p + 0x120, 0, b, &v, w, *(float *)(p + 0xE0));
}
