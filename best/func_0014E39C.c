typedef struct { char pad00[0x50]; void *f50; char pad54[0x480]; s32 f4D4,f4D8,f4DC,f4E0; char pad4E4[8]; s32 f4EC; char pad4F0[0xB0]; s32 f5A0,f5A4; char pad5A8[4]; s32 f5AC; char pad5B0[0x24]; s32 f5D4; } W;
void func_0014E39C(W *w) {
    u16 a=w->f5D4, b=w->f4DC, c=w->f5A0, d=w->f4D4, e=w->f4E0;
    volatile s16 *p=(volatile s16 *)((char *)w+(w->f4EC<<9)+0x1F0);
    s32 x=a+(b+c), y=e+a+((u16)w->f4D8+d), z=b+a+((u16)w->f5AC+c), v=a+(e+d);
    p[0x61]=y; p[0x41]=v; p[0x50]=x; p[0x60]=z; p[0x30]=x; p[0x31]=v; p[0x40]=z; p[0x51]=y;
}
