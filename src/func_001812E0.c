typedef struct { char pad[0x130]; s32 active; s32 count; } Ent;
extern s8 D_00483AC8, D_00484300, D_00484318;
extern s32 D_00484304;
extern s16 D_004869F4;
extern char D_0037F730[];
extern Ent D_006F5AD0[];
void func_00180468(s32);
s32 func_00181080(void *);
void func_00181550(void);
void func_001840C0(void);
s32 func_001D0E70(void);

void func_001812E0(void) {
    s32 n, i;
    if (D_00484300 == 0 && D_00483AC8 != 0 && func_001D0E70() == 0) {
        n = 1;
        do {
            D_004869F4++;
            if (D_004869F4 == -0x8000) {
                D_004869F4 = 0;
                func_00181550();
            }
            if (D_00484304 == 0) func_001840C0();
            func_00181080(D_0037F730);
            if (D_00484318 == 0) {
                i = 0;
                do {
                    if (D_006F5AD0[i].active != 0) {
                        if (!func_00181080(&D_006F5AD0[i])) {
                            if (D_006F5AD0[i].count++ >= 0x1F)
                                func_00180468(D_006F5AD0[i].active);
                        } else {
                            D_006F5AD0[i].count = 0;
                        }
                    }
                    i++;
                } while (i < 16);
            }
            n--;
        } while (n != 0);
    }
}
