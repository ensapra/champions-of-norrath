extern void func_00118140(void *, s32, void *, void *, void *);
extern void func_00118160(void *);
extern void func_00126990(void *);
extern void func_0013E700(s32);
extern char func_0013E710[], func_0013E738[], func_0013E830[];
extern s32 func_001A4174(void *, void *);
extern s32 D_001C6820[4], D_001C6824[4];
extern char D_001C6100[], D_004CA190[];
void func_001269B8(s32 arg0) {
    struct { s32 a, b; void *fn; s32 pad[5]; } sp;
    s32 i;
    if (arg0 >= 0) {
        for (i = 0; i < D_001C6824[0]; i++) {
            if (func_001A4174((char *)D_001C6820[0] + i * 0x21C + 0x1C, D_001C6100) == 0 &&
                func_001A4174((char *)D_001C6820[0] + i * 0x21C + 0x11C, D_001C6100 + 0x100) == 0) {
                func_0013E700(i);
                break;
            }
        }
        if (i == D_001C6824[0]) {
            func_00126990(D_004CA190);
            return;
        }
        func_00118140(&sp, 1, func_0013E710, func_0013E738, func_0013E830);
        sp.fn = func_00126990;
        func_00118160(&sp);
    }
}
