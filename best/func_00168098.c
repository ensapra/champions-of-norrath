typedef struct {
    u64 f;
    u8 pad[0x138];
} Ent;

typedef struct {
    u8 pad[0x4BA0];
    Ent e[12];
} Base;

void func_00168098(u8 *arg0) {
    Base *s = (Base *)(arg0 + 0x910);
    register s32 idx = *(s32 *)(arg0 + 0x4EC);
    register u32 v = *(u32 *)((u8 *)s + 0x55D4);
    s64 mask = -0x41;
    u64 bit = (u64)(v & 1) << 6;

    s->e[idx + 6].f = (s->e[idx + 6].f & mask) | (int)bit;
    s->e[idx + 4].f = (s->e[idx + 4].f & mask) | bit;
    s->e[idx + 2].f = (s->e[idx + 2].f & mask) | bit;
    s->e[idx + 0].f = (s->e[idx + 0].f & mask) | bit;
}
