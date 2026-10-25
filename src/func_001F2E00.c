struct V3 { f32 x, y, z; };
struct Info { s32 a0; s32 a4; s32 a8; s32 aC; s32 a10; };
struct Obj { char pad0[0x10]; V3 pos; char pad1c[0x8]; Info *info; char pad28[0x10]; s16 f38; char pad3a[0xBA]; s32 fF4; char padf8[0x28]; char f120[0x108]; s64 f228; };
extern "C" {
void *func_001441B8(s32);
s64 func_0016C970(s32, s64);
void func_001E5190(void *, V3, s32, s32, void *, s32, s32, s32, f32, s64, s32, s32);
}
static inline char *Make(Obj *o, s64 a) {
    char *mem = (char *)func_001441B8(0x268);
    if (mem)
        func_001E5190(mem, o->pos, o->f38, o->info->aC, o->f120, o->info->a0, o->info->a8, o->info->a10, 1.0f, a, 0xE, 2);
    return mem;
}
extern "C" void func_001F2E00(Obj *o, s32 bit) {
    s64 a, b;
    s32 f;
    s32 id;
    char *p;
    a = func_0016C970(o->info->aC, o->fF4);
    f = o->fF4 | (1 << bit);
    id = o->info->aC;
    o->fF4 = f;
    b = func_0016C970(id, f);
    o->f228 = b;
    a &= ~b;
    p = Make(o, a);
    if (p)
        *(f32 *)(p + 0x1C4) += 2.0f;
}
