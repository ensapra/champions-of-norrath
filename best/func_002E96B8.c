typedef struct { s32 ret; s32 pad4; s32 pad8; s32 id; s16 pad10; s8 ch; s8 pad13; s32 pad14[3]; s32 size; s32 pad24[3]; u8 data[1]; } AudBuf;
extern s32 D_00447F6C;
extern AudBuf *D_00447F74;
extern s32 D_00447F7C;
extern char D_0047C400[];
extern char D_0047C428[];
extern char D_0047C458[];
extern u8 D_008EA780[];
s32 SignalSema_2(s32);
s32 WaitSema_2(s32);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, void *, void *);
void func_00301FFC(void *, void *, s32);
void func_00302560(char *, ...);

s32 func_002E96B8(s32 id, s32 ch, void *dest, s32 *size)
{
    s32 ret;
    AudBuf *p;

    if (D_00447F7C == -1) {
        return 0x8000000A;
    }
    if (dest == NULL) {
        func_00302560(D_0047C400);
        return 0x80000004;
    }
    if (size == NULL || *size > D_00447F6C) {
        func_00302560(D_0047C428);
        return 0x80000004;
    }
    WaitSema_2(D_00447F7C);
    p = D_00447F74;
    p->id = id;
    p->size = *size;
    p->ch = ch;
    if (func_002D8270(D_008EA780, 8, 0, D_00447F74, 0x30, D_00447F74, ((*size + 0x3F) >> 4) << 4, 0, 0) == 0) {
        ret = D_00447F74->ret;
        func_00301FFC(dest, D_00447F74->data, D_00447F74->size);
        p = D_00447F74;
        *size = p->size;
        SignalSema_2(D_00447F7C);
        return ret;
    }
    *size = 0;
    func_00302560(D_0047C458);
    SignalSema_2(D_00447F7C);
    return 0x80000000;
}
