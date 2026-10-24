typedef struct {
    s32 id;
    s32 size;
    union {
        u8 b;
        u16 h;
        s32 w;
    } v;
    s32 pad[5];
} Req1B5;

extern Req1B5 D_0110B1C0;
extern u8 D_0110B3C0[];
s32 func_001B4C40(void);
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_001B58C0(s32 id, void *p, s32 size)
{
    if (func_001B4C40() < 0)
        return 0xFFFF0000;
    D_0110B1C0.id = id;
    D_0110B1C0.size = size;
    if (size == 0)
        D_0110B1C0.v.b = *(u8 *)p;
    else if (size == 1)
        D_0110B1C0.v.h = *(u16 *)p;
    else if (size == 2)
        D_0110B1C0.v.w = *(s32 *)p;
    else
        return 0xFFFEFFFE;
    if (func_001B08B0(D_0110B3C0, 2, 0, &D_0110B1C0, 0x20, &D_0110B1C0, 0x10, 0, 0) < 0)
        return 0xFFFEFFFF;
    return 0;
}
