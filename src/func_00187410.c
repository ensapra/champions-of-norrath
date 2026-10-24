extern void *D_010F4530[3];
extern u8 D_010F4538[];
void func_00187410(void) {
 void *p = D_010F4530[0];
 void *q = *(void **)((u8 *)p + 0x114);
 ((void (*)(void *))q)(D_010F4538);
}
