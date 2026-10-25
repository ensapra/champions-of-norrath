extern s32 func_0026BFE0(s32);
extern s32 func_001353A8(s32);
extern s8 func_00304CFC(s8 *);
extern s16 func_0026FC40(s32);
extern s16 func_0026FC48(s32);
extern void func_00134F68(s32, void *, s32);
extern f32 D_0037EE80[];
extern s32 D_0048453C;
extern s32 D_00484F50;
extern s32 D_00485074;
extern s32 D_00486B80;
extern s32 D_00486B90;

void func_001D2578(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 buf[256];
    u8 *p;
    s32 i;

    func_0026BFE0(D_00484F50);
    D_00485074 = 0;
    if (func_001353A8(D_0048453C) != 0) {
        if (D_00486B80 == 0) {
            buf[0] = 0;
            p = buf + 1;
            *p = func_00304CFC(arg0);
            p = buf + 2;
            i = 0;
            if (*arg0 != 0) {
                do {
                    *p = arg0[i];
                    i++;
                    p++;
                } while (arg0[i] != 0);
            }
            while ((s32)p & 3) {
                *p = -1;
                p++;
            }
            *(s32 *)p = arg1;
            p += 4;
            *p = D_0048453C;
            p++;
            *p = arg2;
            p++;
            *p = arg3;
            p++;
            *p = 0;
            p++;
            *(f32 *)p = D_0037EE80[0];
            p += 4;
            *(f32 *)p = D_0037EE80[1];
            p += 4;
            *(f32 *)p = D_0037EE80[2];
            p += 4;
            *(s16 *)p = func_0026FC40(D_00484F50);
            p += 2;
            *(s16 *)p = func_0026FC48(D_00484F50);
            p += 2;
            func_00134F68(D_00486B90, buf, p - buf);
        }
    }
}
