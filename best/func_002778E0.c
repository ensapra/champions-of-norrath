s32 func_001671F8(char *);
s32 ovl_ntgui2_func_00191830(s32, s32);
s32 func_00277CE0(void *);
s32 func_00277D18(void *, s32);
extern char D_00475F80[];
extern char D_00475F90[];
extern s32 D_004844A4;
s32 func_002778E0(void *p, s32 m, s32 x) {
    s32 r;
    *(s32*)((u8*)p+0x190) = D_004844A4;
    if (*(s32*)((u8*)p+0x400) == 0) {
        if (func_00277CE0(p) != 0) {
            if (func_00277D18(p, x) == 0) {
                if (*(s32*)((u8*)p+0x864) == 0 && *(s32*)((u8*)p+0x3BC) == -1) {
                    r = ovl_ntgui2_func_00191830(m, func_001671F8(D_00475F80));
                } else {
                    r = ovl_ntgui2_func_00191830(m, func_001671F8(D_00475F90));
                }
                return r ? 2 : 2;
            }
        }
    }
    return 0;
}
