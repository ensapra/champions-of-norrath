extern s32 D_00362D80[];
extern u8 jtbl_004C006C[];
void func_001AF710(void *);
void func_0018FD18(void *);

typedef struct { s32 pad[4]; u32 qwc; } Dma;

u32 func_0018F678(u32 a)
{
    if ((a >> 28) == 7)
        a = (a & 0x0FFFFFFF) | 0x80000000;
    return a;
}

void func_0018F6A0(s8 *p, s32 n)
{
    s32 i;
    if (n != 0) {
        i = n - 1;
        do {
            *p = 0;
            i--;
            p++;
        } while (i != -1);
    }
}

s32 func_0018F6D8(u32 i)
{
    if (i < 10)
        return D_00362D80[i];
    return 0;
}

void func_0018F5F0(volatile Dma *d, u32 n, s32 timeout)
{
    s32 i = timeout ? timeout : 0x1000000;
    while (d->qwc < n) {
        if (--i < 0) {
            func_001AF710(jtbl_004C006C + 0xEA34);
            func_0018FD18((void *)d);
        }
    }
}
