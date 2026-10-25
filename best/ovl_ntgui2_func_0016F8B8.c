s32 func_0016FB28(void *, void *, void *, void *, void *, s32, void *, void *);
u64 func_0016FBAC(void *, s32, s32, ...);
void func_0016FCC4(void *, void *, void *, void *, ...);
void func_0014CBF4(s32, void *, s32);

void ovl_ntgui2_func_0016F8B8(char *a0) {
    char *p = a0 + 0x990;
    char *t6 = a0 + 0x9C0, *t5 = a0 + 0x9D0, *t7 = a0 + 0x9E0, *t8 = a0 + 0x9F0;
    char *t10 = a0 + 0xA00, *t11 = a0 + 0x960;
    s32 sp400[2];
    s32 sp800[4], sp810[4], sp820[4];
    char *s830, *s834;
    char *v16, *v19, *v21, *v22;
    s32 v23, v30, t9;
    if (*(s32 *)(a0 + 0x988) != 0) {
        v23 = v30 = *(s32 *)(a0 + 0xA14);
        t9 = *(s32 *)(a0 + 0xA18);
        if (*(s32 *)(a0 + 0x918) == 0) {
            v16 = t6; v19 = t5; v22 = t7; v21 = t8;
            s830 = t10; v30 = t9; s834 = t11;
        } else {
            s834 = t10; v19 = t6; s830 = t11; v16 = t5; v21 = t7; v22 = t8; v23 = t9;
        }
        if (func_0016FB28(p, t5, t6, t7, t8, t9, t10, t11) != 0) {
            *(s32 *)(a0 + 0x988) = 0;
            return;
        }
        func_0016FCC4(p, sp800, v16, v19);
        func_0016FCC4(p, sp810, v22, v21, 0x6A, (u32)sp800);
        func_0016FCC4(p, sp820, s830, s834, 0x48, func_0016FBAC(p, v23, v30, 0x39, (u32)sp810));
        sp400[0] = 0xC8;
        *(u64 *)(sp400 + 2) = (u32)sp820;
        func_0014CBF4(*(s32 *)(a0 + 0x984), 0, 3);
        func_0014CBF4(*(s32 *)(a0 + 0x980), sp400, 1);
    }
}
