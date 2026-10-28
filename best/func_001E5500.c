typedef struct __attribute__((packed, aligned(4))) { u32 w[3]; } C12;
typedef struct { C12 head; u8 pad[20]; } L32;
typedef struct { u8 a[0xC]; s32 flags; C12 pos; u8 b[0x2C]; void *vt; s32 x4c; s32 f50; u8 f54; u8 pp[3]; s32 f58; f32 f5c; } O;
extern u8 D_0044A6F0[];
extern f32 D_00480B14;
void *func_001441B8(s32);
void func_001411F0(void *, void *, s32, s32);
void func_001E5828(void *, void *, s32, s32, s32, s32);
void func_001E5500(O *p, C12 *b) {
    L32 loc1;
    C12 loc2;
    f32 f;
    loc1.head = *b;
    func_001411F0(p, &loc1.head, 0, 0);
    p->vt = D_0044A6F0;
    p->flags |= 0x4009;
    void *tmp = func_001441B8(0x60);
    if (tmp) {
        loc2 = p->pos;
        func_001E5828(tmp, &loc2, 0x46, 0x56, 0x7E, 0xFA);
    }
    f = D_00480B14;
    p->f54 = 1;
    p->f50 = 0;
    p->f58 = 0;
    p->f5c = f;
}
