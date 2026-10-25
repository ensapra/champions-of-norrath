typedef struct { char b[0x1320]; } Big;
extern Big D_010C9D00;
extern s32 D_001C4D3C[];
void func_00126F58(void);
void func_0013DE28(void *);
void func_00128A48(void);
void func_00127348(Big *p) {
    D_010C9D00 = *p;
    func_00126F58();
    func_0013DE28(&D_010C9D00);
    if (D_001C4D3C[0] != 0) func_00128A48();
}
