typedef struct { s32 a[2]; void (*cb)(s32); s32 pad[5]; } W;
extern char D_004CA0E0[], D_004CA0F0[], D_004CA118[], D_004CA128[], D_004CA148[], D_004CA158[], D_004CA170[];
extern s32 D_010C9124[], D_010C9128[], D_001BB6C4[], D_001C682C[], D_001C6838[];
void func_00114948(s32, s32, s32, s32, s32, s32);
void func_00118140(W *, s32, void *, void *, void *);
void func_00118160(W *);
void func_00118278(s32, W *);
s32 func_0011BA18(s32);
void func_00126010(s32);
void func_00126540(void);
void func_0013B5F8(void *, void *);
s32 func_0013B698(void *);
s32 func_0013B6F0(void *, s32);
void func_0013E918(s32);
void func_0013E948(s32);
s32 func_001A4174(s32, s32);
extern char func_0013E968[], func_0013E9A0[], func_0013EC58[], func_0013EC90[], func_0013F460[], func_0013F488[], func_0013FA70[];
void func_00126298(s32 arg0);

void func_00126298(s32 arg0) {
    W w0, w1, w2;
    char *p;
    s32 i;
    if (arg0 >= 0) {
        if (D_010C9128[0] != 0) {
            func_00126010(0);
            return;
        }
        p = D_004CA170;
        D_010C9124[0] = 1;
        if (func_0013B698(p) == 0) {
            func_0013B5F8(p, D_004CA158);
            func_00118140(&w0, 1, func_0013F460, func_0013F488, func_0013FA70);
            w0.cb = func_00126298;
            func_00118278(0, &w0);
            return;
        }
        if (func_0013B6F0(D_004CA128, -1) == 0 && func_0013B698(D_004CA148) == 0) {
            func_00118140(&w1, 1, func_0013E968, func_0013E9A0, func_0013EC58);
            func_0013E948(func_0013B698(D_004CA0E0));
            w1.cb = func_00126010;
            func_00118160(&w1);
            return;
        }
        i = 0;
        func_00118140(&w2, 1, func_0013EC90, func_0013E9A0, func_0013EC58);
        w2.cb = func_00126010;
        while (i < D_001C6838[0]) {
            if (func_001A4174(D_001C682C[0] + i * 0x20C + 0x10C, func_0013B698(D_004CA118)) == 0) {
                func_0013E918(i);
                break;
            }
            i++;
        }
        func_0013E948(func_0013B698(D_004CA0E0));
        func_00118160(&w2);
        return;
    }
    func_00126540();
    if (arg0 != -0x10) {
        if (arg0 == -8) {
            func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x3D), 0, D_001BB6C4[0]);
        } else {
            func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x3A), 0, D_001BB6C4[0]);
        }
    } else if (func_0013B6F0(D_004CA0F0, -1) != 3) {
        func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x4A), 0, D_001BB6C4[0]);
    } else {
        func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x4B), 0, D_001BB6C4[0]);
    }
}
