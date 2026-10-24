s32 Deci2Call(s32, void *);
s32 SignalSema(s32);

void func_001B8058(s32 a)
{
    s32 buf[2];
    buf[0] = a;
    Deci2Call(-8, buf);
}

typedef struct { s32 from; s32 to; } Pair19C;
typedef struct { s32 key; Pair19C *list; s32 count; } Ent19C;
extern s32 D_003642DC;
extern u8 *D_004804D0;
extern u8 jtbl_004C006C[];

s32 func_0019C8A8(s32 *key)
{
    s32 n = D_003642DC;
    s32 *arr = *(s32 **)(D_004804D0 + 0x54);
    s32 i, j;
    Ent19C *e;

    if (n == 0) {
        return 0;
    }
    for (i = 0; i < 4; i++) {
        e = &((Ent19C *)(jtbl_004C006C + 0xF6DC))[i];
        if (*key == e->key) {
            for (j = 0; j < e->count; j++) {
                if (e->list[j].from == arr[n - 1]) {
                    arr[n - 1] = e->list[j].to;
                    return 1;
                }
            }
        }
    }
    return 0;
}

void func_0019C7D0(u16, u8, s32 *);

void func_0019C79C(s32 a, u16 b, u8 c, s32 *d)
{
    if (a == 0) {
        func_0019C7D0(b, c, d);
    }
}

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 sema14;
    s32 sema18;
    s32 unk1C;
} S19C714;

void func_0019C714(S19C714 *p)
{
    if (p->unk0 != 0 && p->unk1C - p->unk8 >= p->unk0) {
        p->unk0 = 0;
        SignalSema(p->sema14);
    }
    if (p->unk4 != 0 && p->unk8 >= p->unk4) {
        p->unk4 = 0;
        SignalSema(p->sema18);
    }
}
