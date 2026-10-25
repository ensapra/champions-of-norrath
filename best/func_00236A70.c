s32 func_001CE218(void *, void *, s32, s32, s32, s32, s32, s32, f32, f32);
void func_00236A70(void *a, void **list) {
    u16 mode;
    s32 v;
    mode=*(u16 *)((char *)a+0x23C);
    v=*(s32 *)((char *)a+0x3CC);
    if (v==0) {
        v=*(s32 *)((char *)a+0x3C8);
        if (v==0) {
            if (*(s16 *)((char *)a+0x23C)==0x15) goto accepted;
            goto mode_test;
        }
    }
    mode=(u16)(mode<<16);
    goto mode_test;
accepted:
    goto scan;
mode_test:
    mode=(u16)(mode<<16);
    mode=(u16)((s32)(mode<<16)>>16);
    if ((s16)mode==0x16) goto scan;
    if ((s16)mode!=0x17) return;
scan:
    {
        void **p=list;
        void *item=*p;
        if(item==0) return;
        do {
            p=(void **)((char *)p+4);
            if(*(s32 *)((char *)item+12)&32) {
                func_001CE218(item,a,0x186A0,0,0,0x100041,0,0,
                  (f32)*(s16 *)((char *)a+0xC8),(f32)*(s16 *)((char *)a+0xCA));
                *(s32 *)((char *)a+0x3CC)=1;
            }
            item=*p;
        } while(item);
    }
}
