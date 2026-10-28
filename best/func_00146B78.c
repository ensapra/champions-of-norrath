extern char func_001C6788[];
extern char jtbl_004C006C[];
extern void func_00118140(void *, s32, void *, void *, void *);
extern s32 func_00118160(void *);
extern void func_0013E948(void *);
extern void func_0013E918(s32);
extern void func_00147018(void);
extern s32 func_001A4174(void *, void *);
extern void func_0013E968(void);
extern void func_0013E9A0(void);
extern void func_0013EC58(void);
extern void func_0013EC90(void);
extern void func_00146CB8(void);
#define FLAG (*(s32 *)0x1C6890)
#define TAB (*(s32 *)0x1C682C)
#define KEY (jtbl_004C006C + 0xB0FC)
void func_00146B78(s32 arg0) {
    s32 a[8];
    s32 b[8];
    s32 i;
    if (arg0 >= 0) {
        if (FLAG == 0) {
            func_00118140(a, 1, func_0013E968, func_0013E9A0, func_0013EC58);
            func_0013E948(KEY);
            a[2] = (s32)func_00146CB8;
            func_00118160(a);
        } else {
            func_00118140(b, 1, func_0013EC90, func_0013E9A0, func_0013EC58);
            b[2] = (s32)func_00146CB8;
            for (i = 0; i < *(s32 *)(func_001C6788 + 0xB0); i++) {
                if (func_001A4174((void *)(TAB + i * 0x20C + 0x10C), KEY) == 0) {
                    func_0013E918(i);
                    break;
                }
            }
            func_0013E948(KEY);
            func_00118160(b);
        }
    } else {
        func_00147018();
    }
}
