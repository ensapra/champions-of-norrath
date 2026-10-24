typedef struct { s32 x, y, z; } T12;
extern u8 D_0044D018[];
extern u8 D_0044CF88[];
extern char D_0044CD48[];
extern s32 D_004844A4;
extern char D_00600D20[];
extern char D_00462370[];
extern char D_00483B70[];
s16 func_001411F0(void *, void *, s32, s32);
void func_00147A48(void *, s32);
void func_001637A8(void *);
void func_00163830(void *, s32, s32);
void func_00143830(void *);
s32 func_00166F48(void *);
s32 func_00165DC0(char *, char *);
void func_0024D308(s32, void *, f32);
void func_001C4190(s32, T12 *, s32);
void func_001437E8(void *);

static inline void base_init(void *a, T12 v, s32 c)
{
    func_001411F0(a, &v, 0, 0);
    *(void **)((u8 *)a + 0x48) = D_0044D018;
    func_00147A48(a, c);
}

void func_00154960(void *a, T12 *b, s32 c) {
    T12 t = *b;
    base_init(a, t, c);
    *(void **)((u8 *)a + 0x48) = D_0044CF88;
    *(f32 *)((u8 *)a + 0x1C) = 12.0f;
    *(s32 *)((u8 *)a + 0xC) |= 0x4002;
}

void func_00154CC0(void *p, T12 *src, s32 arg2) {
    T12 t = *src;
    char *q = (char *)p + 0x58;
    func_001411F0(p, &t, 0, 0);
    *(void **)((char *)p + 0x48) = D_0044CD48;
    q[5] = 1;
    *(s32 *)((char *)p + 0x80) = arg2;
    *(u8 *)((char *)p + 0x4C) = 0;
    *(u32 *)((char *)p + 0xC) |= 0x220C;
    func_001637A8(q);
    *(s32 *)((char *)p + 0x50) = D_004844A4;
    func_00163830(q, func_00166F48(D_00600D20), 0x204);
    func_00143830(p);
}

static inline void spawn(s32 x, T12 v, s32 y)
{
    func_001C4190(x, &v, y);
}

void func_00154DB0(void *obj, void *state) {
    s32 flags = *(s32 *)((u8 *)state + 0xC);
    T12 pos;
    if (flags & 0x20000) return;
    if (*(s8 *)((u8 *)obj + 0x4C) == 0) return;
    if (!(flags & 0x40)) return;
    if (*(s32 *)((u8 *)obj + 0x80) == 0) return;
    func_0024D308(func_00165DC0(D_00483B70, D_00462370), obj, 1.0f);
    spawn(*(s32 *)((u8 *)state + 0x3C0), *(T12 *)((u8 *)obj + 0x10), *(s32 *)((u8 *)obj + 0x80));
    *(s32 *)((u8 *)obj + 0x80) = 0;
    func_001437E8(obj);
}
