extern s32 D_00446078[];
extern void iSignalSema_2(s32);
void func_002E1278(s32 a0,s32 a1,u8 *a2,s32 a3) {
    volatile s32 *io=(volatile s32 *)(a0|0x20000000);
    s32 n=io[0];
    if(n) {
        u8 *out=*(u8 **)((u8 *)io+8);
        s32 i=0;
        if(n>0) do {
            out[0]=*((volatile u8 *)io+0x10+i);
            i++;
            out++;
        } while(i<io[0]);
    }
    n=io[1];
    if(n) {
        u8 *out=*(u8 **)((u8 *)io+0xC);
        s32 i=0;
        if(n>0) do {
            out[0]=*((volatile u8 *)io+0x50+i);
            i++;
            out++;
        } while(i<io[1]);
    }
    iSignalSema_2(D_00446078[0]);
}
