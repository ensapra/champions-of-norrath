extern s32 D_001CD178[];
extern s32 D_001CD17C[];
extern s32 D_001CD200[];
extern u8 D_001CD040[];
s32 func_00178FD8(void);
void func_00178E88(s32);
void func_00178420(void *, s32);
void func_00171840(void);

void func_00171C40(s32 arg0, s32 arg1)
{
    D_001CD200[0] = arg0;
    D_001CD178[0] = arg1;
    func_00178FD8();
    func_00178E88(D_001CD17C[0]);
    func_00178420(D_001CD040, 6);
    func_00171840();
}
