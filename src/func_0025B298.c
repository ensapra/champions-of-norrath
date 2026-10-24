typedef struct {
    char name[0x18];
} Ent0025B308;
extern Ent0025B308 D_00839850[];
extern void func_001D1108(void *);
extern s32 func_003044FC(void *, void *);

s32 func_0025B308(void) {
    char buf[0x100];
    s32 i;

    func_001D1108(buf);
    for (i = 0; i < 26 && D_00839850[i].name[0] != 0; i++) {
        if (func_003044FC(D_00839850[i].name, buf) == 0) {
            return 1;
        }
    }
    return 0;
}

s32 D_00486C60;
s32 D_00486C34;
s32 D_00486C54;
s8 D_00485BDF;
s8 D_00485BE1;
s8 D_00485BEC;
s32 D_00486CCC;
s8 D_00486CB8;
s8 D_00486CB9;
s32 D_00486C9C;

extern void func_0025B908(void);
extern void func_0025BBD0(s32, s32);
extern void func_0025B970(void);

static __inline__ s32 busy_0025B298(void) {
    if (D_00486C60 != 0) return 0;
    if (D_00486C34 != -1) return 1;
    return D_00486C54 != 0;
}

s32 func_0025B298(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (!busy_0025B298()) {
        D_00485BEC = arg0;
        D_00485BE1 = arg4;
        D_00486CCC = arg1;
        D_00486CB8 = arg2;
        D_00486CB9 = arg3;
        D_00485BDF = 0;
        func_0025B908();
        func_0025BBD0(7, 0);
        func_0025B970();
    }
}

s32 func_001915C0(void *);
extern char D_00474CC8[];
extern char D_00485A78[];

void func_0025B0E0(void *arg0) {
    if (D_00486C34 != 7 && D_00486C34 != 3) {
        if (func_001915C0(D_00474CC8) == 0) {
            s32 r = func_003044FC(arg0, D_00485A78);
            if (r != 0) {
                r = 1;
            } else {
                r = 10;
            }
            D_00486C9C = r;
        }
    }
}
