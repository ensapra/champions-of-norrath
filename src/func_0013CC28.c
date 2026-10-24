extern s32 D_010CE600[];
extern s32 D_010CE5FC[];
void func_0013CB90(s32 a) { D_010CE600[0] = a; }

void func_0013FFF8(void);
void func_001403B8(void);
void ExitDeleteThread(void);

void func_0013CC28(void) {
    func_0013FFF8();
    D_010CE5FC[0] = 3;
    func_001403B8();
    ExitDeleteThread();
}

typedef struct { s32 a; void (*fn)(void); s32 stk; s32 ssize; void *sp; s32 prio; s32 pad[6]; } Th;
extern Th D_010CE608;
extern u8 D_0050A1C0[];
extern u8 func_001C5078[];
void *func_001A2660(void *, s32, s32);
s32 func_0011B908(s32, s32);
s32 CreateThread(void *);
void StartThread(s32, s32);

void func_0013CBA0(void) {
    Th *t = &D_010CE608;
    s32 stk;
    *(s32 *)(func_001C5078 + 0x478) = 0;
    func_001A2660(t, 0, 0x30);
    t->fn = func_0013CC28;
    stk = func_0011B908(0x10, 0x2000);
    t->ssize = 0x2000;
    t->sp = D_0050A1C0 + 0x5830;
    t->prio = 0xA;
    t->stk = stk;
    StartThread(CreateThread(t), 0);
}

typedef volatile u64 vu64;
typedef struct Info { s16 h0; s16 h2; s16 h4; s16 h6; s32 w8; } Info;
Info *func_0018D7A8(void);
void func_0018DC48(u64 *a) {
    Info *p = func_0018D7A8();
    if (p->h6 == 1) {
        *(vu64 *)0x12000000 = a[0];
        *(vu64 *)0x12000070 = a[2];
        *(vu64 *)0x12000080 = a[3];
        *(vu64 *)0x120000C0 = a[4];
    } else {
        *(vu64 *)0x12000000 = a[0];
        *(vu64 *)0x12000020 = a[1];
        *(vu64 *)0x12000090 = a[2];
        *(vu64 *)0x120000A0 = a[3];
        *(vu64 *)0x120000E0 = a[4];
    }
}
