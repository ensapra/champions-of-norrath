typedef struct { s32 a, b; void *fn; s32 pad[5]; } Scope;
typedef struct { char pad[0xC]; char a[0x100]; char b[0x100]; } Ent;
extern void func_00118140(Scope *, s32, void *, void *, void *);
extern void func_00118160(Scope *);
extern void func_001259B0(s32);
extern char *func_0013B698(char *);
extern s32 func_001A4174(void *, void *);
extern void func_001A42B8(void *, void *);
extern void func_0013DEE8(void);
extern void func_0013E128(void);
extern void ovl_ntgui2_func_0013E160(void);
extern char D_004CA100[];
extern char D_004CA118[];
extern char D_001C5600[];
extern char D_001C5500[];
extern Ent *D_001C682C[];
extern Ent *D_001C6830[];
extern s32 D_001C6838[];
extern s32 D_001C683C[];

void func_00125E68(char *arg0) {
    s32 i;
    Scope sc;

    for (i = 0; i < D_001C683C[0]; i++) {
        if (func_001A4174(D_001C6830[0][i].b, func_0013B698(D_004CA100)) == 0) {
            func_001A42B8(D_001C5600, D_001C6830[0][i].a);
            break;
        }
    }
    if (func_001A4174(D_001C5600, arg0 + 0x100) == 0) {
        func_001259B0(0);
        return;
    }
    func_00118140(&sc, 1, ovl_ntgui2_func_0013E160, func_0013DEE8, func_0013E128);
    sc.fn = func_001259B0;
    for (i = 0; i < D_001C6838[0]; i++) {
        if (func_001A4174(D_001C682C[0][i].b, func_0013B698(D_004CA118)) == 0) {
            func_001A42B8(D_001C5500, D_001C682C[0][i].a);
            break;
        }
    }
    func_00118160(&sc);
}
