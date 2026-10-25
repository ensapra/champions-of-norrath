typedef struct { s32 v; s32 a; s32 b; } Ent;
void func_00166548(u16 *p) {
    u32 n = p[0];
    Ent *e = (Ent *)(p + 2);
    u32 i;
    for (i = 0; i < n; i++) {
        e[i].v += (s32)p;
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
    u8 *p;
    s32 i;
    func_00303EB8(buf, D_00484000, name);
    p = (u8 *)buf;
    if (buf[0] != 0) {
        do {
            u8 ch = *p;
            s8 sc = ch;
            s8 d = sc;
            if (D_0047E1F1[sc] & 2) d = sc - 0x20;
            *p = d;
            p++;
        } while (*p != 0);
    }
    for (i = 0; i < D_00483FF0->count; i++) {
        if (func_003044FC(buf, (u8 *)D_00483FF0 + i * 32) == 0) break;
    }
    return i != D_00483FF0->count;
}

s8 D_00484010;
s8 D_00483FFD;
s8 D_00483FFC;
s32 D_00484008;
s32 D_0048400C;
void *D_00486924;
s32 func_002E43B8(void);
void func_00191BA8(s32);
void func_00165238(void);
s32 func_00191180(void);
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
