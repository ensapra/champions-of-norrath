typedef struct { s32 a; s32 b; char *items; u32 n; } L;
typedef struct { s32 p0; s32 p1; char *items; u32 n; } Arg;
extern char func_001D7EB0[];
extern char func_001DC2C0[];
extern char func_001E1FE8[];
extern char jtbl_004C006C[];
extern s32 func_00183838(char *, char *, s32);
extern void func_00183888(char *, char *, s32);
extern void func_00184AA0(void);
extern void func_001A2850(char *, u32, ...);
#define L1 ((L *)(func_001D7EB0 + 0x410))
#define L2 ((L *)(func_001DC2C0 + 0xE30))
#define L3 ((L *)(func_001E1FE8 + 0x1C8))
void func_00185048(Arg *arg)
{
    u32 k = 0;
    u32 off, i, lim, j;
    char *t;
    L *cur;
    L1->items = func_001D7EB0 + 0x420;
    L2->items = func_001DC2C0 + 0xE40;
    L1->b = 0;
    L1->a = 0;
    L1->n = 0;
    L2->b = 0;
    L2->a = 0;
    L2->n = 0;
    func_001A2850(jtbl_004C006C + 0xDA1C, arg->n, arg, L2);
    off = 0;
    if (arg->n != 0) {
        do {
            cur = L1;
            lim = 0x1F4;
            t = arg->items + off;
            if (L3->n != 0) {
                i = 0;
                j = 0;
                while (i < L3->n) {
                    char *p = L3->items + j;
                    j += 0x28;
                    if (func_00183838(t, p, 10) == 0) break;
                    i++;
                }
                if (i < L3->n) {
                    lim = 0x10;
                    cur = L2;
                }
            }
            i = 0;
            j = 0;
            while (i < cur->n) {
                char *p = cur->items + j;
                j += 0x28;
                if (func_00183838(t, p, 10) == 0) break;
                i++;
            }
            if (cur->n == 0 || i == cur->n) {
                if (cur->n < lim) {
                    func_00183888(cur->items + cur->n * 0x28, t, 10);
                    cur->n = cur->n + 1;
                }
            }
            k++;
            off += 0x28;
        } while (k < arg->n);
    }
    func_00184AA0();
    func_001A2850(jtbl_004C006C + 0xD9EC, L1->n);
}
