typedef struct {
    s16 inter;
    s16 omode;
    s16 ff;
    s16 rev;
    s32 hid;
    s32 hfunc;
} GsP;
GsP *func_002D1878(void);
void SetGsCrt_2(int, int, int);
void RemoveIntcHandler_2(int, int);
void GsPutIMR_2(long);
void func_002D5BC0(int);

void func_002D16E8(s16 mode, s16 inter, s16 omode, s16 ff)
{
    GsP *p;
    switch (mode) {
    case 0:
        p = func_002D1878();
        *(volatile u64 *)0x12001000 = 0x200;
        p->inter = inter;
        p->omode = omode;
        p->rev = (u16)(u8)(*(volatile u64 *)0x12001000 >> 16);
        GsPutIMR_2(0xFF00);
        p->ff = (ff != 0);
        if (p->hid) {
            func_002D5BC0(2);
            RemoveIntcHandler_2(2, p->hfunc);
            p->hfunc = 0;
            p->hid = 0;
        }
        SetGsCrt_2(inter & 1, omode & 0xFF, ff & 1);
        break;
    case 1:
        *(volatile u64 *)0x12001000 = 0x100;
        break;
    case 5:
        p = func_002D1878();
        p->ff = (ff != 0);
        p->inter = inter;
        p->omode = omode;
        p->rev = (u16)(u8)(*(volatile u64 *)0x12001000 >> 16);
        SetGsCrt_2(inter & 1, omode & 0xFF, ff & 1);
        break;
    }
}
