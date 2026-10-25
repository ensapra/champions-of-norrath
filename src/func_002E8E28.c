void *func_003021B0(void*,s32,s32);
extern s32 D_008EBE3C[];
typedef struct { u8 pad0[0x10]; s32 x10; u8 pad14[8]; s32 x1c; u8 pad20[4]; s16 x24; s16 x26; u8 pad28[0xE0-0x28]; u8 xe0[0x20]; s32 x100; u8 x104[8]; } S8E28;
void func_002E8E28(S8E28 *p)
{
    s32 one;
    p->x100 = 0;
    func_003021B0(p->x104, 0, 8);
    p->x26 = 0;
    p->x24 = 0;
    func_003021B0(p->xe0, 0, 32);
    one = 1;
    p->x1c = one;
    p->x10 = 0;
    D_008EBE3C[0] = one;
}
