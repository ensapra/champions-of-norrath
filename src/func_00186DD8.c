typedef struct { s32 size; s32 count; s32 pad; u8 *cur; } Ring;
void func_001AE898(Ring *r) {
    r->count++;
    r->cur++;
    if (r->cur == (u8 *)r + (r->size + 0x10)) r->cur = (u8 *)r + 0x10;
}

typedef struct { s32 tab[11]; s32 count; s32 cur; } Sel;
extern Sel D_010F44A8;
extern char jtbl_004C006C[];
void func_001A2850(char *, s32, s32);
void func_0019BC38(s32);
void func_0019BFD8(s32);

s32 func_00186DD8(void) {
    return D_010F44A8.tab[D_010F44A8.cur];
}

void func_00186DF8(void) {
    Sel *s = &D_010F44A8;
    s32 n = s->count;
    u32 i = s->cur + 1;
    if (n == 1) return;
    if (i >= n) i = 0;
    func_001A2850(jtbl_004C006C + 0xDF04, n, i);
    func_0019BC38(s->tab[i]);
    func_0019BFD8(7);
}

typedef struct {
    u8 pad0[0x7C];
    void (*fn7C)(s32);
    u8 pad80[0xBC - 0x80];
    s32 fBC;
    u8 padC0[0x100 - 0xC0];
    s32 (*fn100)(void);
} Api;
extern Api *D_00362CC8[];
void func_0019BCA8(void);

void func_00186EB8(void *self, u16 btn) {
    if (D_00362CC8[0]->fn100() == 0) {
        if (btn & 0x20) D_00362CC8[0]->fn7C(1);
        if (btn & 0x100) func_00186DF8();
    }
    if (btn & 0x40) {
        if (D_00362CC8[0]->fBC == 0) func_0019BCA8();
    }
}
