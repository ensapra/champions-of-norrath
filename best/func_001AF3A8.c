typedef struct { s8 pad[0x1C]; s8 type; s8 kind; } Item;
typedef struct { Item *item; s32 pad; u64 flags; } Arg;
extern s8 D_00408600[];
extern u8 D_007CC5C8[];
extern char D_00466470[], D_004667B0[], D_004667C8[], D_004667E0[], D_004664D0[], D_004664E8[], D_00466500[], D_00466518[], D_00466530[], D_00484828[];
void func_001B1AA0(void);
void func_001A1C98(s32);
void func_001B01B0(s32, void *, s32);
void func_00303EB8(void *, char *);
s32 func_001353A8(s32);
s32 func_00165DC0(char *, void *);
void func_0024D308(s32, s32, f32);
void func_001A5480(void);

void func_001AF3A8(s32 idx, Arg *a)
{
    u8 buf[0x30];
    s8 *g = D_00408600 + idx * 0x5DB0;
    s8 *g8 = g + 8;
    s32 k = a->item->kind;
    s32 t = a->item->type;
    u64 fl;
    s32 i;
    s32 *p;

    if (k == 0) {
        if (*(s32 *)(g + 0x55D0) != 0 && t == 0) {
            func_001B1AA0();
        } else {
            if (a->item->type != 8 &&
                *(s32 *)(g8 + g[0x5C14] * 4 + 0x55C0) == (s32)a) {
                g[0x5C1E] = 5;
                func_001A1C98(idx);
                func_001B01B0(idx, D_007CC5C8 + (idx * 33) * 8, 0);
            }
            *(s32 *)(g8 + t * 4 + 0x5580) = 0;
            p = (s32 *)(g8 + 0x55C0);
            for (i = 0; i < 2; i++, p++) {
                if (*p == (s32)a)
                    *p = 0;
            }
        }
    } else if (k == 1) {
        *(s32 *)(g + t * 4 + 0x5588) = 0;
    } else if (k == 2) {
        if (*(s32 *)(g + 0x55A0) == (s32)a) {
            *(s32 *)(g + 0x55A0) = 0;
        } else if (*(s32 *)(g + 0x559C) == (s32)a) {
            *(s32 *)(g + 0x559C) = 0;
        } else if (t == 7) {
            *(s32 *)(g + 0x55A4) = 0;
        } else if (t == 14) {
            *(s32 *)(g + 0x55C0) = 0;
        }
    }
    fl = a->flags;
    if (fl & 0x800000) func_00303EB8(buf, D_00466470);
    else if (fl & 0x200000) func_00303EB8(buf, D_004667B0);
    else if (a->item->type == 3) func_00303EB8(buf, D_004667C8);
    else if (fl & 0x400000) func_00303EB8(buf, D_004667E0);
    else if (fl & 0x40000) func_00303EB8(buf, D_004664D0);
    else if (fl & 0x100000) func_00303EB8(buf, D_004664E8);
    else if (fl & 0x80000) func_00303EB8(buf, D_00466500);
    else if (fl & 0x1000000) func_00303EB8(buf, D_00466518);
    else func_00303EB8(buf, D_00466530);
    if (func_001353A8(idx)) {
        func_0024D308(func_00165DC0(D_00484828, buf), 0, 1.0f);
    }
    func_001B01B0(idx, D_007CC5C8 + (idx * 33) * 8, 0);
    func_001A5480();
}
