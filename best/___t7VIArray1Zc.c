typedef struct {
    s32 unk0;
    s32 unk4;
} VIArr;

extern void __builtin_vec_delete(s32 *);
extern void __builtin_delete(void *);
s32 DestroyPool__t7VIArray1Zc(VIArr *);

void ___t7VIArray1Zc(VIArr *self, s32 flags) {
    if (self->unk4 != 0) {
        DestroyPool__t7VIArray1Zc(self);
        if (self->unk4 != 0)
            __builtin_vec_delete((s32 *)self->unk4);
    }
    if (flags & 1)
        __builtin_delete(self);
}
