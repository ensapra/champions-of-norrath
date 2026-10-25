typedef struct { char p0[0x34]; s32 f34; char p1[0x10]; s32 f48; char p2[0x14]; s32 f60; } S6B;
extern s32 D_00483F18;
extern s32 D_00483F1C;
extern s32 D_004844A0;
extern s8 D_00484B00;
extern s8 D_00484B01;
extern s32 D_00486680;
s32 func_001AC3E8();
s32 func_001D0E70();
s32 func_001D38B0();
void func_0026CF70(void *);
void func_0026D4D0(void *);
void func_0026F7A0(void *);

void func_0026BFE0(S6B *a) {
    s32 t;
    D_00484B01 = 0;
    if (func_001D0E70() != 0) {
        a->f60 = 0;
    } else if (D_004844A0 != 0) {
        if (D_00483F18 != 0) {
            a->f60 = 0;
        } else if (D_00486680 != 0) {
            a->f60 = 0;
        } else if (D_00484B00 != 0) {
            a->f60 = 0;
        } else if (func_001D38B0() != 0) {
            a->f60 = 0;
        } else if (D_00483F1C != 0) {
            a->f60 = 0;
        } else {
            if (func_001AC3E8() != 0) {
                goto z;
            }
            a->f60 = 1;
        }
    } else {
z:
        a->f60 = 0;
    }
    t = a->f34;
    if (t == 1 || a->f48 != 0) {
        func_0026D4D0(a);
        t = a->f48;
        if (t == 1 && a->f34 != t) {
            a->f48 = 2;
        }
    } else {
        if ((u32)(t - 3) < 3U) {
            func_0026CF70(a);
            return;
        }
        if (t == 2) {
            func_0026F7A0(a);
        }
    }
}
