extern s32 Clear__t7VIArray1Zi();
extern s32 Allocate__t7VIArray1Zi(s32 *);

s32 Init__t7VIArray1Zii(s32 *arg0, s32 arg1) {
    if (Clear__t7VIArray1Zi() < 0) {
        return -1;
    }
    *arg0 = arg1;
    return (Allocate__t7VIArray1Zi(arg0) >= 0) ? 0 : -1;
}

extern s32 D_01228970[];
extern char D_011C2808[];
extern void __rtti_user(s32 *, char *);

s32 *__tf10VIResource(void) {
    s32 *ptr = D_01228970;
    if (*ptr == 0) {
        __rtti_user(ptr, D_011C2808);
    }
    return ptr;
}

typedef struct {
    s32 unk0;
    s32 unk4;
    u8 *unk8;
    s32 unkC;
    s32 unk10;
} MM;

s32 LinkFreeChain__t10VIMultiMap2ZfZ14VIEmitterEntryi(MM *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_3;
    s32 var_5;
    s32 var_6;

    temp_3 = arg0->unk4;
    arg0->unk10 = arg1;
    if (arg1 >= temp_3) {
        arg0->unk10 = -1;
    } else {
        var_5 = arg1;
        if (var_5 < (temp_3 - 1)) {
            var_6 = var_5 * 0x70;
            do {
                s32 temp_4 = var_5 + 1;
                var_5 = temp_4;
                *(s32 *)(arg0->unk8 + var_6 + 4) = temp_4;
                *(s32 *)(arg0->unk8 + var_6 + 8) = -2;
                var_6 += 0x70;
            } while (var_5 < (arg0->unk4 - 1));
        }
        temp_2 = var_5 * 0x70;
        *(s32 *)(arg0->unk8 + temp_2 + 4) = -1;
        *(s32 *)(arg0->unk8 + temp_2 + 8) = -2;
    }
    return 0;
}

extern void ___10VIMatrix44(s32, s32);

s32 FreeNode__t10VIMultiMap2ZfZ14VIEmitterEntryi(MM *arg0, s32 arg1) {
    s32 temp_16 = arg1 * 0x70;

    ___10VIMatrix44((s32)(arg0->unk8 + temp_16 + 0x30), 2);
    *(s32 *)(arg0->unk8 + temp_16 + 4) = arg0->unk10;
    *(s32 *)(arg0->unk8 + temp_16 + 8) = -2;
    arg0->unk10 = arg1;
    arg0->unk0 = arg0->unk0 - 1;
    return 0;
}
