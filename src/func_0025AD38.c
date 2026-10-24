s32 D_00486C60;
s32 D_00486C58;
u8 D_00483F30;
u8 D_00485BEC;
u8 D_00486CBB;
u8 D_00486CBA;
u8 D_00485BDE;
u8 D_00485BDF;
s32 D_00486C78;
s32 D_00486C6C;
s32 D_00486CB4;
s32 D_00486CB0;

extern void func_0025B970(void);
extern s32 func_0025BBD0(s32, s32);

s64 func_0025AD38(s32 arg0, s32 arg1)
{
    if (D_00486C60 == 0) {
        if (D_00486C58 == 0) {
            D_00485BEC = arg0;
            func_0025B970();
            D_00486CBB = arg1;
            D_00486CBA = D_00483F30;
            D_00486C78 = 0;
            D_00486C6C = 0;
            D_00486CB4 = 0;
            D_00486CB0 = 0;
            D_00485BDE = 0;
            D_00485BDF = 0;
            return func_0025BBD0(3, 0);
        }
    }
}
