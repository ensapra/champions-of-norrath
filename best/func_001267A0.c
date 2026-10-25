typedef struct {
    u8 pad[0x10C];
    char name[0x100];
} Ent1267A0;

extern s32 D_001BB6C4[];
extern s32 D_010C9124[];
extern Ent1267A0 *D_001C6830[];
extern s32 D_001C683C[];
extern char D_004CA0F0[];
extern char D_004CA100[];
extern char D_004CA170[];
void func_00118140(void *, s32, void *, void *, void *);
void func_00118160(void *);
s32 func_0011BA18(s32);
void func_00114948(s32, s32, s32, s32, s32, s32);
s32 func_0013B6F0(void *, s32);
void *func_0013B698(void *);
void func_001265E0(void);
void func_00126298(s32);
void func_0013D430(s32);
void func_0013D460(void);
void func_0013D498(void);
void func_0013D768(void);
void func_0013D7A0(void);
s32 func_001A4174(void *, void *);

void func_001267A0(void) {
    u8 buf[0x20];
    s32 i;

    func_001265E0();
    switch (func_0013B6F0(D_004CA0F0, -1)) {
    case 1:
        func_00114948(4, 0x1F4, 0xFA, func_0011BA18(0x36), 0, D_001BB6C4[0]);
        break;
    case 2:
        func_00114948(4, 0x1F4, 0xFA, func_0011BA18(0x37), 0, D_001BB6C4[0]);
        break;
    case 3:
        func_00114948(4, 0x1F4, 0xFA, func_0011BA18(0x38), 0, D_001BB6C4[0]);
        break;
    }
    if (D_010C9124[0] != 0) {
        func_00126298(0);
        return;
    }
    if (func_0013B698(D_004CA170) != 0) {
        func_00118140(buf, 1, func_0013D7A0, func_0013D498, func_0013D768);
        *(s32 *)(buf + 8) = (s32)func_00126298;
        for (i = 0; i < D_001C683C[0]; i++) {
            if (func_001A4174(D_001C6830[0][i].name, func_0013B698(D_004CA100)) == 0) {
                func_0013D430(i);
                break;
            }
        }
        func_00118160(buf);
    } else {
        func_00118140(buf, 1, func_0013D460, func_0013D498, func_0013D768);
        *(s32 *)(buf + 8) = (s32)func_00126298;
        func_00118160(buf);
    }
}
