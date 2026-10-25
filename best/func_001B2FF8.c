typedef struct {
    s32 sem;
    void *reply;
    s32 len;
    s32 arg1;
    u8 msg[0x400];
} T;

extern T D_01109800;
extern u8 D_0110A440[];
extern u8 D_0110AF00[];
extern u8 jtbl_004C006C[];

s32 CreateSema(void *);
void DeleteSema(s32);
void WaitSema(s32);
s32 func_001B1538(s32);
void func_001B1568(void);
void func_001B1668(void);
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_001B2FF8(s32 a0)
{
    s32 stk[8];
    s32 reply;
    s32 sem;
    s32 r;
    T *d = &D_01109800;

    func_001B1538(15);
    if (*(s32 *)(jtbl_004C006C + 0x3F30) == 0) {
        func_001B1668();
    }
    d->arg1 = a0;
    stk[1] = 1;
    stk[2] = 0;
    stk[5] = 0;
    sem = CreateSema(stk);
    D_01109800.sem = sem;
    d->reply = &reply;
    d->len = 4;
    r = func_001B08B0(&D_0110AF00, 15, 0, d, 16, &D_0110A440, 4, 0, 0);
    if (r < 0) {
        DeleteSema(sem);
        func_001B1568();
        return -1;
    }
    r = *(s32 *)((u32)D_0110A440 | 0x20000000);
    func_001B1568();
    if (r == 0) {
        DeleteSema(sem);
        return -1;
    }
    WaitSema(sem);
    DeleteSema(sem);
    return reply;
}
