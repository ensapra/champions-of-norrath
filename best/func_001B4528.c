typedef struct Q {
    s32 sema;
    s32 *resp;
    s32 f8;
    u32 len;
    s32 buf;
    u8 path[0x400];
} Q;
extern Q D_01109800;
extern u8 D_0110AF00[];
extern u8 D_0110A440[];
extern s32 jtbl_004C006C[];
s32 CreateSema(void *);
void DeleteSema(s32);
void WaitSema(s32);
void func_001AFE98(s32, u32);
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_001B1538(s32);
void func_001B1568(void);
void func_001B1668(void);

s32 func_001B4528(u8 *name, s32 buf, u32 len) {
    s32 sp[6];
    s32 res[4];
    s32 i;
    s32 sema, v;
    Q *q = &D_01109800;
    func_001B1538(0x11);
    if (*(s32 *)((u8 *)jtbl_004C006C + 0x3F30) == 0) func_001B1668();
    q->path[0] = name[0];
    i = 0;
    if (name[0] != 0) {
        for (i = 1; i < 0x400; i++) {
            q->path[i] = name[i];
            if (name[i] == 0) break;
        }
    }
    if (i == 0x400) q->path[0x3FF] = 0;
    if (len >= 0x400) len = 0x3FF;
    q->buf = buf;
    q->len = len;
    func_001AFE98(buf, len);
    sp[2] = 0;
    sp[1] = 1;
    sp[5] = 0;
    sema = CreateSema(sp);
    q->resp = res;
    q->sema = sema;
    q->f8 = 4;
    if (func_001B08B0(D_0110AF00, 0x19, 0, q, 0x80C, D_0110A440, 4, 0, 0) < 0) {
        DeleteSema(sema);
        func_001B1568();
        return -0xB;
    }
    v = *(s32 *)((u32)D_0110A440 | 0x20000000);
    func_001B1568();
    if (v == 0) {
        DeleteSema(sema);
        return -0xB;
    }
    WaitSema(sema);
    DeleteSema(sema);
    return res[0];
}
