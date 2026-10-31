typedef struct {
    s32 unk0;
    s32 unk4;
} VIArr;

s32 DestroyPool__t7VIArray1Zi(VIArr *self) {
    s32 n;
    s32 i;
    n = self->unk0;
    i = (n != 0) ? 0 : 0x7FFFFFFF;
    if (i != 0x7FFFFFFF) {
        do {
            if ((i ^ (n - 1)) == 0)
                i = 0x7FFFFFFF;
            else
                i++;
        } while (i != 0x7FFFFFFF);
    }
    return 0;
}

extern s32 *__builtin_vec_new(s32);

s32 Allocate__t7VIArray1Zi(VIArr *self) {
    s32 n;
    s32 *p;
    n = self->unk0;
    if (n == 0)
        return 0;
    p = __builtin_vec_new(n * 4);
    self->unk4 = (s32)p;
    if (p == 0)
        return -1;
    if (n > 0) {
        s32 i = n - 1;
        while (i != 0)
            i--;
    }
    return 0;
}

extern void __tf8VISprite(void);
extern void __rtti_si(void *, const void *, const void *);
extern u8 D_011C3C80[9];
extern u8 D_012278D0[16];
extern u8 D_012278E0[16];

s32 *__tf19VIStreamAudioSprite(void) {
    if (*(s32 *)D_012278E0 == 0) {
        __tf8VISprite();
        __rtti_si((s32 *)D_012278E0, D_011C3C80, D_012278D0);
    }
    return (s32 *)D_012278E0;
}

extern void __builtin_vec_delete(s32 *);

s32 Clear__t7VIArray1Zi(VIArr *self) {
    if (self->unk4 != 0) {
        if (DestroyPool__t7VIArray1Zi(self) >= 0) {
            if (self->unk4 != 0)
                __builtin_vec_delete((s32 *)self->unk4);
            self->unk4 = 0;
        } else {
            return -1;
        }
    }
    self->unk0 = 0;
    return 0;
}
