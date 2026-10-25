extern s32 D_001BD8AC[];
extern void *D_001BB6C4[];
extern s32 D_010CE2E0[];
extern s32 D_010CE2E8[];
extern s32 func_001523D0(s32);
extern void func_00152520(void);
extern void func_0014B6F4(s32);
extern void func_00104F30(s32);
extern void func_00106E30(s32, s32);
extern void func_001389A0(s32);
extern void func_00139550(s32, s32);

typedef struct { char pad[0x10]; s32 state; } Msg;

static inline void Free(s32 *p)
{
    if (func_001523D0(D_001BD8AC[0]) == *p) {
        func_00152520();
    }
    func_0014B6F4(*p);
    func_00104F30(*p);
    func_00106E30(0, *p);
    func_00106E30(1, *p);
    if ((s32)D_001BB6C4[0] == *p) {
        D_001BB6C4[0] = 0;
    }
    func_001389A0(*p);
    *p = 0;
}

s32 func_00134D20(Msg *arg0)
{
    s32 i;
    s32 *p;

    switch (arg0->state) {
    case 1:
        func_00139550(0xFF, 0x28);
        return 0;
    case 2:
        for (i = 0; i < 3; i++) {
            p = &D_010CE2E8[i];
            if (*p != 0) {
                Free(p);
            }
        }
        return 0;
    case 5:
        p = D_010CE2E0;
        if (*p != 0) {
            Free(p);
        }
        return 1;
    }
    return 0;
}
