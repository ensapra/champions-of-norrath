void func_00166548(u16 *p) {
    u32 n = *p;
    u16 *e = p + 2;
    s32 *q = (s32 *)e;
    while (n != 0) {
        *q = *q + (s32)p;
        q += 3;
        n--;
    }
}

extern u8 D_0047E1F1[];
extern char D_00484000[];
typedef struct { u8 pad[0x6000]; s32 count; } Tbl;
extern Tbl *D_00483FF0;
s32 func_00303EB8(char *, const char *, ...);
s32 func_003044FC(char *, u8 *);
s32 func_00166720(char *name) {
    char buf[80];
    char *p;
    s32 i;
    func_00303EB8(buf, D_00484000, name);
    for (p = buf; *p != 0; p++) {
        s8 c = *(u8 *)p;
        if (D_0047E1F1[c] & 2) c -= 0x20;
        *p = c;
    }
    for (i = 0; i < D_00483FF0->count; i++) {
        if (func_003044FC(buf, (u8 *)D_00483FF0 + i * 32) == 0) break;
    }
    return i != D_00483FF0->count;
}

extern s8 D_00484010;
extern s8 D_00483FFD;
extern s8 D_00483FFC;
extern s32 D_00484008;
extern s32 D_0048400C;
extern void *D_00486924;
void func_002E43B8(void);
void func_00191BA8(s32);
void func_00165238(void);
void func_00191180(void);
void func_00191BB0(void);
void func_00166928(s32 a, s32 b) {
    struct { volatile s8 status; s32 len; s32 sector; } l;
    if (D_00484010) {
        func_002E43B8();
        D_00483FFD = 1;
        D_00484010 = 0;
    }
    D_00483FFC = 1;
    D_00484008 = a;
    D_0048400C = b;
    D_00486924 = &l;
    l.status = 0;
    func_00191BA8(0xFFFFFF);
    while (D_00483FFC) {
        func_00165238();
        func_00191180();
    }
    func_00191BB0();
}

extern s8 D_00486920[3];
extern s32 D_00483FF4;
extern s32 D_00483FF8;
extern char D_004633E0[];
extern u8 D_006CC6A0[];
s32 func_002E3D90(s32 *, s32 *);
s32 func_002E2CB0(void *, char *);
void func_00164C70(void *, void *, s32);
s32 func_002DC138(s32);
void func_002E40E0(s32, s32, s32);
void func_00164E58(void) {
    u8 buf[0x30];
    s32 r;
    D_00486920[0] = -0x38;
    D_00486920[1] = 0;
    D_00486920[2] = 0;
    func_002E3D90(&D_00483FF4, &D_00483FF8);
    if (D_00483FF4 != 0) D_00486920[1] = 0;
    r = func_002E2CB0(buf, D_004633E0);
    if (r != 0) {
        func_00164C70(D_006CC6A0, *(void **)buf, (*(u32 *)(buf + 4) + 0x7FF) >> 11);
    }
    r = func_002DC138(0x14800);
    func_002E40E0(0x28, 3, (r + 0x7FF) & -0x800);
}
