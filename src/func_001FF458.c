typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P12;
typedef struct { u8 pad[0xC]; s32 xC; u8 pad10[4]; s32 x14; u8 pad18[0xAC - 0x18]; s32 xAC; u8 padB0[4]; s32 xB4; } Info;
typedef struct {
    u8 pad0[0x10]; P12 pos;
    u8 pad1C[0x24 - 0x1C]; Info *info;
    u8 pad28[0x3C0 - 0x28]; s32 x3C0;
    u8 pad3C4[0x490 - 0x3C4]; u8 x490[1];
} Ent;
s32 func_00109808(Ent *, s32, s32, s32);
void func_0016CBF8(P12 *);
void func_0013E730(void *);
void func_0016C060(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0013CB88(void);
void func_0016CD20(void);
void func_001FF458(Ent *e)
{
    P12 tmp;
    P12 copy;
    s32 r = func_00109808(e, e->info->xC, e->info->x14, 0);
    if (e->x3C0 != 0) {
        copy = e->pos;
        func_0016CBF8(&copy);
        func_0013E730(e->x490);
        func_0016C060(e->info->xAC, e->info->xB4, 0, e->info->xC, r, -1, -1, 0);
        func_0013CB88();
        func_0016CD20();
    }
}
