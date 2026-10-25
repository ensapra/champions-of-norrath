typedef struct { s32 a; s32 b; } P;
extern char func_001E23F8[];
void func_00181CE0(s32, void *);
void func_0017FD84(f32);
void func_0017FCEC(s32, s32);
void func_0017FF68(s32);
void func_00181878(void);
void func_00181908(void);
void func_00180130(void);
void func_001864F8(s32, s32);
void func_0017FF74(void *, s32, s32);
void func_00180140(void);

void func_00182AA8(s32 a0, s32 a1, s32 a2, P *a3) {
    char buf[0x800];
    if (a1 != 0) {
        func_00181CE0(a1, buf);
        func_0017FD84(0.7314f);
        func_0017FCEC(a3->a, (*(s32 (**)(s32))(func_001E23F8 + 0x128))(a3->b) - *(s32 *)0x001D2180);
        func_0017FF68(1);
        func_00181878();
        func_00181908();
        func_00180130();
        func_001864F8(a0, a2);
        func_0017FF74(buf, a0, 0xC0000);
        func_001864F8(a0, 0);
        func_00180140();
    }
}
