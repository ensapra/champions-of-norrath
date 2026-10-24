typedef volatile u64 vu64;
typedef struct Info { s16 h0; s16 h2; s16 h4; s16 h6; s32 w8; } Info;
Info *func_0018D7A8(void);
void func_001ADBB0(void);
s64 func_001ADC40(void);

s32 ovl_ntgui2_func_0018E4A0(void)
{
    Info *p = func_0018D7A8();
    if (p->w8 == 0) {
        func_001ADBB0();
        if (p->h0 == 1)
            return (s32)((*(vu64 *)0x12001000 >> 13) & 1);
        return 1;
    } else {
        s64 v = (func_001ADC40() >> 13) & 1;
        if (p->h0 == 1)
            return (s32)v;
        return 1;
    }
}

extern s32 D_010D1234[];
extern s32 D_010D1240[];
extern s32 D_010D123C[];
void func_0013FFF8(void);

void func_0013F188(void)
{
    func_0013FFF8();
    D_010D1234[0] = 3;
}

void func_0013F178(s32 a)
{
    D_010D1240[0] = a;
}

void func_0013F168(s32 a)
{
    D_010D123C[0] = a;
}
