typedef struct { s32 a, b; } Pr;
extern Pr D_010CD3E8[], D_010CD3F0[], D_010CD3F8[];
extern s32 D_010CD3D8[], D_010CD3DC[];
extern s32 func_001BCB38[], func_001B9FD8[];
s32 func_001523D0(s32);
void func_00152520(void);
void func_0014B6F4(s32);
void func_00104F30(s32);
void func_00106E30(s32, s32);
void func_001389A0(void);
#define Q (*(s32 *)((char *)func_001B9FD8 + 0x16EC))

#define KB(X, F) do { \
    if ((X)->F != 0) { \
        if (func_001523D0(func_001BCB38[0xD74 / 4]) == (X)->F) func_00152520(); \
        func_0014B6F4((X)->F); \
        func_00104F30((X)->F); \
        func_00106E30(0, (X)->F); \
        func_00106E30(1, (X)->F); \
        if ((X)->F == Q) Q = 0; \
        func_001389A0(); \
        (X)->F = 0; \
    } } while (0)

static inline void K(s32 *p) {
    if (*p != 0) {
        if (func_001523D0(func_001BCB38[0xD74 / 4]) == *p) func_00152520();
        func_0014B6F4(*p);
        func_00104F30(*p);
        func_00106E30(0, *p);
        func_00106E30(1, *p);
        if (*p == Q) Q = 0;
        func_001389A0();
        *p = 0;
    }
}

s32 func_0012DAD0(s32 *arg0) {
    Pr *p;
    switch (arg0[4]) {
    case 1:
        p = D_010CD3E8; KB(p, a);
        p = D_010CD3F8; KB(p, a);
        p = D_010CD3F0; KB(p, a);
        return 0;
    case 2:
        p = D_010CD3E8; KB(p, b);
        p = D_010CD3F8; KB(p, b);
        p = D_010CD3F0; KB(p, b);
        return 0;
    case 3:
        K(D_010CD3DC);
        return 0;
    case 4:
        K(D_010CD3D8);
        return 1;
    case 5:
        return 0;
    }
    return 0;
}
