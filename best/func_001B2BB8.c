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

s32 func_001B2BB8(u8 *msg, s32 a1)
{
    s32 stk[6];
    s32 reply;
    u8 c;
    s32 i;
    s32 sem;
    s32 r;

    func_001B1538(7);
    if (*(s32 *)(jtbl_004C006C + 0x3F30) == 0) {
        func_001B1668();
    }
    c = *msg;
    i = 0;
    D_01109800.msg[0] = c;
    if (c != 0) {
        i = 1;
        while (i < 0x400) {
            c = msg[i];
            D_01109800.msg[i] = c;
            if (c == 0) {
                break;
            }
            i++;
        }
    }
    if (i == 0x400) {
        D_01109800.msg[0x3FF] = 0;
        i = 0x3FF;
    }
    D_01109800.arg1 = a1;
    stk[1] = 1;
    stk[2] = 0;
    stk[5] = 0;
    sem = CreateSema(stk);
    D_01109800.reply = &reply;
    D_01109800.sem = sem;
    D_01109800.len = 4;
    r = func_001B08B0(&D_0110AF00, 7, 0, &D_01109800, i + 0x11, &D_0110A440, 4, 0, 0);
    if (r < 0) {
        DeleteSema(sem);
        func_001B1568();
        return -11;
    }
    r = *(volatile s32 *)((u32)D_0110A440 | 0x20000000);
    func_001B1568();
    if (r == 0) {
        DeleteSema(sem);
        return -11;
    }
    WaitSema(sem);
    DeleteSema(sem);
    return reply;
}
