extern void func_0010B378(s32, void *);
extern void func_0013BBA8(void);
extern void func_00132548(void);
extern s32 D_001BD760[];
extern s32 D_001C4ED4[];
extern s32 D_010CD830[];
extern u8 D_004CA640[];
extern u8 D_001BB720[];

void func_001321E8(s32 arg0, s64 arg1) {
    s32 t = arg1;
    switch (t) {
    case 0: D_001BD760[0] = 1; break;
    case 1: D_001BD760[0] = 2; break;
    case 2: D_001BD760[0] = 3; break;
    case 3: D_001BD760[0] = 5; break;
    case 4: D_001BD760[0] = 6; break;
    }
    func_0010B378(D_010CD830[D_001C4ED4[0]], D_004CA640);
    func_0010B378(D_010CD830[t], D_001BB720);
    func_0013BBA8();
    D_001C4ED4[0] = t;
    func_00132548();
}
