typedef struct { s32 pad0[2]; s32 id; u32 flags; s32 pad1[4]; s64 a; s32 b; void *gp; s32 c; } Ent;
typedef struct { u8 pad[0x4EE4]; s32 pad2[7]; s32 cur; } Glob;
extern volatile Glob jtbl_004C006C;
void func_001B6AE8(Ent *);
void func_001B6A60(Ent *);
s32 func_001B6DC0();
void func_001B68D0(s32);

s32 func_001B7528(s32 h, s64 a, s32 b, s32 c) {
    Ent *e = (Ent *)(((u32)h >> 10) << 6);
    if (h < 0 || (h & 0x3FF) != e->id) return 0x80008002;
    if (jtbl_004C006C.cur == h) return 0x80000010;
    if (e->flags & 2) func_001B6AE8(e);
    e->b = b;
    if (b == 0) {
        e->flags &= ~2;
    } else {
        e->flags |= 2;
        e->a = a;
        e->gp = 0;
        e->c = c;
        if (e->flags & 1) func_001B6A60(e);
    }
    func_001B68D0(func_001B6DC0());
    return 0;
}
