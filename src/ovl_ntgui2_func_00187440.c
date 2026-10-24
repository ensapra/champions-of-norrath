extern void *D_010F4530[1];
extern u8 D_010F4538[];
extern u8 D_004CE108[];
extern u8 D_004CE118[];
extern u8 D_004CE128[];
extern u8 D_004CE138[];
extern u8 D_004C1700[];
void func_001A1568(void *, s32, void *);
void func_001A2660(void *, s32, s32);
void func_00187F10(void *);
void func_00187620(void *, void *);
void func_00187410(void) {
 void *p = D_010F4530[0];
 p = *(void **)((u8 *)p + 0x114);
 ((void (*)(void *))p)(D_010F4538);
}
void func_001873B0(void *o) {
 if (o == 0) func_001A1568(D_004CE108, 0x95, D_004CE118);
 D_010F4530[0] = o;
 {
  void *p = *(void **)((u8 *)o + 0x110);
  ((void (*)(void *, void *))p)(D_010F4538, D_004C1700);
 }
}
void ovl_ntgui2_func_00187440(void *a, void *b) {
 if (a == 0) func_001A1568(D_004CE108, 0xB1, D_004CE128);
 if (b == 0) func_001A1568(D_004CE108, 0xB2, D_004CE138);
 func_001A2660(a, 0, 0x310);
 func_00187F10(a);
 func_00187620(a, b);
}
