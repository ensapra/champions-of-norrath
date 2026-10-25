extern char D_004CA1E0[];
extern s32 D_010C9160[];
extern s32 D_010C92C8[];
extern s32 D_010C92CC[];
extern char func_0013D808[], func_0013D830[], func_0013D920[], func_00127778[];
s32 func_0013B6F0(void *, s32);
s32 func_0011BA18(s32);
void func_00114948(s32, s32, s32, s32, s32, s32);
void func_00118140(void *, s32, void *, void *, void *);
void func_00118160(void *);
void func_0013D430(s32);
void func_00127940(void);
extern s32 D_001BB6C4[];

void func_001277D8(s32 arg0) {
    struct { s32 a; s32 b; void *cb; s32 pad[5]; } buf;
    s32 r;
    s32 id;
    if (arg0 >= 0) {
        switch (arg0) {
        case 0:
        case 1:
            r = func_0013B6F0(D_004CA1E0, -1);
            switch (r) {
            case 1: id = 0x2A; goto common;
            case 2: id = 0x2B;
            common:
                func_00114948(4, 0x1F4, 0xFA, func_0011BA18(id), 0, D_001BB6C4[0]);
                break;
            case 3:
                func_00114948(4, 0x1F4, 0xFA, func_0011BA18(0x2C), 0, D_001BB6C4[0]);
                break;
            }
            func_00118140(&buf, 1, func_0013D808, func_0013D830, func_0013D920);
            buf.cb = func_00127778;
            func_0013D430(D_010C9160[D_010C92CC[0] + D_010C92C8[0]]);
            func_00118160(&buf);
            break;
        case 2:
            func_00127940();
            break;
        }
    }
}
