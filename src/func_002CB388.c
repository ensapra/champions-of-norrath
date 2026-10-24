extern s32 D_00483F30;
typedef struct { s8 b0, b1, b2, b3, b4; s8 pad[7]; } S88B8;
extern volatile S88B8 D_008D88B8;
extern s8 D_008D8938[1008];
void *func_003021B0(void *, s32, s32);
void func_002CB388(void) {
    s8 *p;
    s32 i;
    s32 v;
    if (D_00483F30 == 0) {
        func_003021B0(D_008D8938, 0, 0x3F0);
        D_008D88B8.b4 = 0;
        D_008D88B8.b1 = 0;
        i = 1;
        D_008D88B8.b0 = i;
        v = 0x20;
        D_008D88B8.b3 = v;
        v = -2;
        p = &D_008D8938[0x374];
        for (i = 7; i >= 0; i--) {
            *p = v;
            p -= 0x7E;
        }
    }
}
