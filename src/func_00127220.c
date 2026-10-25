typedef struct {
    s32 state;
    char a[0x100];
    char b[0x100];
    char pad[0x510 - 0x204];
} Slot;
typedef struct { char a[0x100]; char b[0x100]; } Ref;
extern Slot D_001BB908[];
extern s32 D_001BB904[];
extern Ref D_001C6100[];
s32 func_001A4174(char *, char *);

s32 func_00127220(void) {
    s32 i;
    for (i = 0; i < 5; i++) {
        if (D_001BB908[i].state == -1) {
            D_001BB904[0] = i;
            break;
        }
        if (func_001A4174(D_001BB908[i].a, D_001C6100[0].a) == 0 &&
            func_001A4174(D_001BB908[i].b, D_001C6100[0].b) == 0) {
            D_001BB904[0] = i;
            if (D_001BB908[i].state == 1) return 1;
        }
    }
    if (i == 5) {
        D_001BB908[4].state = -1;
        func_00127220();
    }
    return 0;
}
