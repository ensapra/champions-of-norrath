typedef struct { char c[9]; } S9;
typedef struct { char pad[0xAC]; f32 f; char pad2[0x5DB0 - 0xB0]; } Ent;
extern s32 func_001D0E70();
extern void func_001D0900(s32);
extern void func_001D0DC8(s32);
extern void func_001D3AB0(char *, s32);
extern s32 func_003044FC(char *, char *);
extern char D_0034B6B1[];
extern Ent D_00408600[];
extern char D_0046CA68[];
extern S9 D_0046CA78;
extern s32 D_00484074;
extern s8 D_00484318;
extern s32 D_00484538;
extern s16 D_00484CD0;
extern char D_00484DE8[];
extern s32 D_00484F44;
extern s16 D_00484F88[3];
extern s32 D_00484F90;

void func_001CD650(void) {
    s32 i;
    char *p;
    char *q;
    if (D_00484318 != 0) return;
    if (D_00484F90 != 0 && D_00484F44 == 0) {
        if (D_00484538 == 0) return;
        if (func_001D0E70() == 0) {
            D_00484074 = 10;
            if (D_00484CD0 > 0) {
                D_00484CD0 = D_00484CD0 - 1;
                if (D_00484CD0 == 0) {
                    p = D_0034B6B1;
                    if (func_003044FC(p, D_00484DE8) == 0 && D_00484538 == 1) {
                        D_00484F90 = 0;
                        func_001D3AB0(D_0046CA68, -1);
                        q = p - 0x51;
                        *(S9 *)q = D_0046CA78;
                        q[0x50] = -1;
                    } else {
                        func_001D0900(0);
                        func_001D0DC8(0);
                    }
                }
            }
        }
    }
    if (D_00484538 != 0 && D_00484538 != D_00484F44) {
        for (i = 0; i < D_00484538; i++) {
            if (D_00408600[i].f <= 0.0f && D_00484F88[i] > 0) {
                D_00484F88[i]--;
                if (D_00484F88[i] < 0) D_00484F88[i] = 0;
            }
        }
    }
}
