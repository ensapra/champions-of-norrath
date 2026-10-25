typedef struct { s32 ret; s32 pad4; s32 pad8; s32 id; s16 pad10; s8 ch; s8 pad13; s32 pad14[3]; s32 size; s32 pad24[3]; u8 data[1]; } AudBuf;
typedef struct { void *dest; s32 *size; } AudAReq;
extern s32 D_00447F6C;
extern AudBuf *D_00447F74;
extern s32 D_00447F7C;
extern char D_0047C758[];
extern char D_0047C780[];
extern char D_0047C7B0[];
extern char D_0047C7F0[];
extern u8 D_008EA780[];
extern AudAReq D_008EA930;
s32 WaitSema_2(s32);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, void *, void *);
s32 func_002D8468(void *);
void func_002EAEA8(void *);
void func_00302560(char *, ...);

s32 func_002E9BF8(s32 id, s32 ch, void *dest, s32 *size)
{
    AudBuf *p;

    if (D_00447F7C == -1) {
        return 0x8000000A;
    }
    if (dest == NULL) {
        func_00302560(D_0047C758);
        return 0x80000004;
    }
    if (size == NULL || *size > D_00447F6C) {
        func_00302560(D_0047C780);
        return 0x80000004;
    }
    if (func_002D8468(D_008EA780) != 0) {
        func_00302560(D_0047C7B0);
        return 0x80000008;
    }
    WaitSema_2(D_00447F7C);
    p = D_00447F74;
    p->id = id;
    p->size = *size;
    p->ch = ch;
    D_008EA930.dest = dest;
    D_008EA930.size = size;
    if (func_002D8270(D_008EA780, 8, 1, D_00447F74, 0x30, D_00447F74, ((*size + 0x3F) >> 4) << 4, func_002EAEA8, &D_008EA930) != 0) {
        *size = 0;
        func_00302560(D_0047C7F0);
        return 0x80000000;
    }
    return 0;
}
