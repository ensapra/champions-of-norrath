extern u8 jtbl_004C006C[];
void Copy(void *, void *, s32);
void func_00192510(void *, void *);
void func_0018B0A8(u8 *p) { func_00192510(p + 0x320, 0); }
void func_0018B0B0(u8 *p, void *q) { func_00192510(q, p + 0x320); }
void func_0018B0C0(u8 *p) { func_00192510(p + 0x310, 0); }
s32 func_001B5DE0(s32 i) { s32 v; Copy(&v, *(s32 **)(jtbl_004C006C + 0x3f54) + i, 4); return v; }
