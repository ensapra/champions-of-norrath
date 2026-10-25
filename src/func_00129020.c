typedef struct { s32 a; s32 b; void *fn; s32 pad[5]; } Task129;
void func_00114948(s32, s32, s32, s32, s32, s32);
void func_00118140(Task129 *, s32, void *, void *, void *);
void func_00118160(Task129 *);
s32 func_0011BA18(s32);
void func_0013D2A0(void);
void func_0013D2B8(s32);
void func_00128FD0(void);
void func_0013D2C8(void);
void func_0013D2F0(void);
void func_0013D3B0(void);
extern s32 D_001BB6C4[];
extern s32 D_001C4D78[];
extern s32 D_001C4D7C[];

void func_00129020(s32 arg0)
{
    Task129 t;
    switch (arg0) {
    case 1:
        switch (D_001C4D7C[0]) {
        case 1:
            func_00114948(4, 0x1F4, 0xFA, func_0011BA18(0x24), 0, D_001BB6C4[0]);
            break;
        case 2:
            func_00114948(4, 0x1F4, 0xFA, func_0011BA18(0x25), 0, D_001BB6C4[0]);
            break;
        }
        func_0013D2A0();
        func_0013D2B8(D_001C4D7C[0]);
        func_00118140(&t, 1, func_0013D2C8, func_0013D2F0, func_0013D3B0);
        t.fn = func_00128FD0;
        func_00118160(&t);
        break;
    case 2:
        D_001C4D78[0] = -1;
        D_001C4D7C[0] = -1;
        break;
    }
}
