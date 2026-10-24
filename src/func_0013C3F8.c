typedef struct { char pad[0x5570]; s32 active; char pad2[0x5DB0 - 0x5574]; } PlayerSlot;
typedef struct { char pad[0x2C]; char **argv; } AppArgs;

extern s32 D_00484538;
extern PlayerSlot D_00408600[];
extern AppArgs *D_00483ACC;
extern char D_00483A40[];
extern s32 D_00484F44;
extern f32 D_0047FCB0;
extern f32 D_0047FCB4;
extern f32 D_00484F24;
s32 func_00304F60(char *, char *, s32);
void func_001D0900(s32);
void func_0013A478(char *);

s32 func_0013C348(void *unused, s32 *in) {
    f32 target, delta, cur;
    if (D_00484F44 == 2) {
        target = in[2];
    } else {
        target = in[1];
    }
    target *= D_0047FCB0;
    delta = in[3] * D_0047FCB4;
    cur = D_00484F24 + delta;
    if (delta > 0.0f && target <= cur) {
        D_00484F24 = target;
        return 1;
    }
    if (delta < 0.0f && cur <= target) {
        D_00484F24 = target;
        return 1;
    }
    D_00484F24 = cur;
    return 0;
}

s32 func_0013C3F8(void) {
    char **p = D_00483ACC->argv;
    while (*p != NULL) {
        if (func_00304F60(*p, D_00483A40, 6) == 0) {
            func_001D0900(0);
            func_0013A478(*p + 6);
            return 0;
        }
        p++;
    }
    return 0;
}

s32 func_0013C478(void) {
    s32 i;
    for (i = 0; i < D_00484538; i++) {
        if (D_00408600[i].active) {
            return 1;
        }
    }
    return 0;
}
