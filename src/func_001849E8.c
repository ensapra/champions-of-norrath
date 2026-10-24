typedef struct {
    s32 unk0;
    s32 unk4;
    u8 *data;
    u32 count;
} List28;

void *func_00183888(void *, void *, s32);

s32 func_001849E8(List28 *src, List28 *dst, s32 n) {
    s32 i;
    dst->count = 0;
    for (i = 0; i < src->count; i++) {
        if (i >= n) {
            return -i;
        }
        func_00183888(dst->data + dst->count * 0x28, src->data + i * 0x28, 10);
        dst->count++;
    }
    return i;
}
