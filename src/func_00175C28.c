typedef struct {
    s32 size;
    s32 count;
    s32 pad8;
    u8 *wp;
    u8 data[1];
} Ring1AE898;

void func_001AE898(Ring1AE898 *r) {
    r->count++;
    r->wp++;
    if (r->wp == r->data + r->size) {
        r->wp = r->data;
    }
}

s32 *func_00176840(s32 unused, u8 *p, u32 n) {
    u32 count = *(u32 *)(p + 0xC);
    s32 *e = (s32 *)(p + 0x10);
    u32 i;
    for (i = 0; i < count; i++) {
        if (i == n) {
            return e;
        }
        e += 4;
        e = e + 4 + e[0] + e[1];
    }
    return 0;
}

extern s32 D_001D0290[];
extern s32 D_001D0294[];

void func_00175C38(void) {
    D_001D0290[0] = 0x3000;
}

void func_00175C28(void) {
    D_001D0294[0] = 0x4000;
}
