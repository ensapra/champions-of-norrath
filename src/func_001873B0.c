extern void *D_010F4530[3];
extern u8 D_010F4538[];
extern u8 D_004CE108[];
extern u8 D_004CE118[];
extern u8 D_004C1700[];
void func_001A1568(void *, s32, void *);
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
