typedef struct {
    s32 id;
    s32 size;
    union {
        u8 b;
        u16 h;
        s32 w;
    } v;
    s32 pad[5];
} Req2DD;

extern Req2DD D_008E1E80;
extern u8 D_008E2080[];
s32 func_002DC600(void);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_002DD280(s32 id, void *p, s32 size)
{
    if (func_002DC600() < 0)
        return 0xFFFF0000;
    D_008E1E80.id = id;
    D_008E1E80.size = size;
    if (size == 0)
        D_008E1E80.v.b = *(u8 *)p;
    else if (size == 1)
        D_008E1E80.v.h = *(u16 *)p;
    else if (size == 2)
        D_008E1E80.v.w = *(s32 *)p;
    else
        return 0xFFFEFFFE;
    if (func_002D8270(D_008E2080, 2, 0, &D_008E1E80, 0x20, &D_008E1E80, 0x10, 0, 0) < 0)
        return 0xFFFEFFFF;
    return 0;
}
