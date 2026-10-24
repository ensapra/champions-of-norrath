s32 SignalSema(s32);

typedef struct { s32 from; s32 to; } Pair19C;
typedef struct { s32 key; Pair19C *list; s32 count; } Ent19C;
extern s32 D_003642DC[];
extern u8 *D_004804D0;
extern u8 jtbl_004C006C[];

s32 func_0019C8A8(s32 *key)
{
    s32 n = D_003642DC[0];
    s32 *arr = *(s32 **)(D_004804D0 + 0x54);
    s32 i, j;

    if (n == 0) {
        return 0;
    }
    for (i = 0; i < 4; i++) {
        Ent19C *e = &((Ent19C *)(jtbl_004C006C + 0xF6DC))[i];
        if (*key == e->key) {
            for (j = 0; j < e->count; j++) {
                Pair19C *pr = &e->list[j];
                s32 *dst = &arr[n - 1];
                if (pr->from == *dst) {
                    *dst = pr->to;
                    return 1;
                }
            }
        }
    }
    return 0;
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

void func_0019C714(volatile S19C714 *p)
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
