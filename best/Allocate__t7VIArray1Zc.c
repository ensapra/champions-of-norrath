typedef struct {
    s32 unk0;
    s32 unk4;
} VIArr;

extern void *__builtin_vec_new(s32);

s32 Allocate__t7VIArray1Zc(VIArr *self) {
    s32 n;
    void *p;

    n = self->unk0;
    if (n == 0)
        return 0;
    p = __builtin_vec_new(n);
    self->unk4 = (s32)p;
    if (p == 0)
        return -1;
    if (self->unk0 > 0) {
        s32 i = self->unk0 - 1;
        while (i != 0)
            i--;
    }
    return 0;
}
