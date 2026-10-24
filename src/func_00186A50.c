typedef struct {
    s32 size;
    s32 count;
    s32 unk8;
    u8 *ptr;
} Ring;

void func_001AE898(Ring *r) {
    r->count++;
    r->ptr++;
    if (r->ptr == (u8 *)r + (r->size + 0x10)) {
        r->ptr = (u8 *)r + 0x10;
    }
}

typedef struct {
    u8 pad[0x80];
    s32 x;
    s32 y;
} S_10F44A8;
extern S_10F44A8 D_010F44A8;
void func_00186AC0(s32 a, s32 b) {
    S_10F44A8 *p = &D_010F44A8;
    p->y = b << 4;
    p->x = a << 4;
}

extern void *D_00362CC8[6];
extern u8 D_010F44E8[];
void func_00186F68(void *, void *);
void func_00187130(void *, void *);
void func_00186A80(void *a) {
    if (*(s32 *)((u8 *)D_00362CC8[0] + 0xBC) == 0) {
        func_00187130(a, D_010F44E8);
    } else {
        func_00186F68(a, D_010F44E8);
    }
}

void func_00186A50(void) {
    void *p = D_00362CC8[0];
    void *q = *(void **)((u8 *)p + 0x114);
    ((void (*)(void *))q)(D_010F44E8);
}
