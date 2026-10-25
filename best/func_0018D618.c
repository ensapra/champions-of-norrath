typedef struct {
    s16 inter;
    s16 omode;
    s16 ffmode;
    s16 version;
    s32 vsfunc;
    s32 vsid;
} GParam;

GParam *func_0018D7A8(void);
void GsPutIMR(u64);
s32 RemoveIntcHandler(s32, s32);
void SetGsCrt(s16, s16, s16);
s32 func_001AE200(s32);

void func_0018D618(s16 mode, s16 inter, s16 omode, s16 ffmode)
{
    GParam *p;

    switch (mode) {
    case 0:
        p = func_0018D7A8();
        *(volatile u64 *)0x12001000 = 0x200;
        p->inter = inter;
        p->omode = omode;
        p->version = (*(volatile u64 *)0x12001000 >> 16) & 0xFF;
        GsPutIMR(0xFF00);
        p->ffmode = ffmode ? 1 : 0;
        if (p->vsfunc) {
            func_001AE200(2);
            RemoveIntcHandler(2, p->vsid);
            p->vsid = 0;
            p->vsfunc = 0;
        }
        SetGsCrt(inter & 1, omode & 0xFF, ffmode & 1);
        break;
    case 1:
        *(volatile u64 *)0x12001000 = 0x100;
        break;
    case 5:
        p = func_0018D7A8();
        p->ffmode = ffmode ? 1 : 0;
        p->inter = inter;
        p->omode = omode;
        p->version = (*(volatile u64 *)0x12001000 >> 16) & 0xFF;
        SetGsCrt(inter & 1, omode & 0xFF, ffmode & 1);
        break;
    }
}
