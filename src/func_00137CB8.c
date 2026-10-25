extern char D_004CAF00[];
extern char D_004CAF10[];
extern char D_004CAF20[];
extern char D_004CAF28[];
extern char D_004CAF38[];
extern s32 D_010CE3FC[];
extern s32 D_010CE400[];
extern char D_010CE408[];
extern s32 D_001BB6C4[];
void func_00137E08(void);
void func_00118140(void *, s32, s32, void *, s32);
s32 func_00118160(void *);
s32 func_0013B698(char *);
s32 func_001A3E10(s32, char *, s32 *);
s32 func_001A3D78(char *, char *, s32, ...);
void func_0010DE10(s32, char *);
void func_00138990(s32);
void func_00137C60(void);
void func_0010B718(void);

void func_00137CB8(void) {
    char sp[32];
    s32 v;
    s32 r;
    func_00118140(sp, 0, 0, func_00137E08, 0);
    D_010CE400[0] = func_00118160(sp);
    r = func_0013B698(D_004CAF00);
    if (r != 0) {
        func_001A3E10(r, D_004CAF10, &v);
        func_001A3D78(D_010CE408, D_004CAF20, v, func_0013B698(D_004CAF28));
    } else {
        func_001A3D78(D_010CE408, D_004CAF38, func_0013B698(D_004CAF28));
    }
    func_0010DE10(D_010CE3FC[0], D_010CE408);
    D_001BB6C4[0] = D_010CE3FC[0];
    func_00138990(D_010CE3FC[0]);
    func_00137C60();
    func_0010B718();
}
