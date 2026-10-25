extern void func_0011E420(s32, s32);
extern void func_0011CEF0(s32, s32, s32);
extern void func_00111380(void *);
extern void func_00111C40(s32, s32, s32, s32, s32, s32, void *, void *);
extern void func_00118140(void *, s32, void *, void *, void *);
extern void func_00118278(s32, void *);
extern s32 func_0011BA18(s32);
extern void func_0010C7E8(s32, s32, s32, s32);
extern char func_001281A0[], func_00128148[], func_00128560[], func_0013F460[], func_0013F488[], func_0013FA70[], func_001BCB38[];
extern s32 D_010C9140[4], D_010C9150[4], D_010C9154[4];
void func_001285E8(s32 arg0) {
    struct { s32 a, b; void *fn; s32 pad[5]; } sp;
    s32 t17, t16;
    func_0011E420(D_010C9150[0], D_010C9154[0]);
    func_0011CEF0(D_010C9140[0], arg0, 3);
    if (arg0 >= 0) {
      if (arg0 < 7) {
        func_00111380(func_001BCB38 + 0xE10);
        func_00111C40(D_010C9140[0], 0x82, 0x6A, 0x190, 3, 1, func_001281A0, func_00128148);
        func_00118140(&sp, 1, func_0013F460, func_0013F488, func_0013FA70);
        sp.fn = func_00128560;
        func_00118278(0, &sp);
        t17 = func_0011BA18(2);
        t16 = func_0011BA18(3);
        func_0010C7E8(0, t17, t16, func_0011BA18(6));
      }
    }
}
