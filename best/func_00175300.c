typedef struct {
    u8 *out;
    u8 *out2;
    u8 pad08[0xC];
    s16 x;
    u8 pad16[8];
    u16 mode;
    s32 key;
    u16 flag;
    u16 pad26;
} Obj175300;
extern Obj175300 D_010EA1E0[];

void func_00175300(s32 a, s32 b) {
    Obj175300 *p = &D_010EA1E0[a];
    Obj175300 *q = &D_010EA1E0[b];
    u64 tag;
    u16 f;
    if (p->key != q->key) return;
    f = q->flag;
    if ((s16)q->flag == 0) {
        tag = (s64)q->x | ((u64)(q->mode & 0xF) << 24) | 0x100000000ULL;
    } else {
        tag = (s64)q->x | ((u64)(q->mode & 0xF) << 24);
    }
    *(u64 *)(p->out + 0x30) = tag;
    if ((s16)f) {
        *(u64 *)(p->out + 0x90) = ((u64)(f & 3) << 17) | 0x10000;
    } else {
        *(u64 *)(p->out + 0x90) = 0x20000;
    }
    if ((s16)f) {
        *(u64 *)(p->out2 + 0x70) = ((u64)(f & 3) << 17) | 0x10000;
    } else {
        *(u64 *)(p->out2 + 0x70) = 0x20000;
    }
}
