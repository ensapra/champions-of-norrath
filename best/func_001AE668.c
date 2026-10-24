typedef struct { u8 type; u8 val; } Ev_1AE668;
typedef struct { s32 unk0; s32 cnt; Ev_1AE668 ev[0x200]; } EvQ_1AE668;
extern EvQ_1AE668 D_01107408;
extern s32 D_01107400[];
extern u8 jtbl_004C006C[];
s32 iSignalSema(s32);
s32 func_001AE668(u32 arg0) {
    EvQ_1AE668 *q;
    s32 i;
    if (arg0 >= 0x80 || *(s32 *)(jtbl_004C006C + 0x3E98) == 0) {
        return -1;
    }
    q = &D_01107408;
    i = q->cnt & 0x1FF;
    q->cnt = i + 1;
    q->ev[i].type = 1;
    q->ev[i].val = arg0;
    iSignalSema(D_01107400[0]);
    return arg0;
}
