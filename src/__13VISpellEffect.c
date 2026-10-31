void __13VISpellEffect(void *arg0) {
    volatile s32 *p2 = (volatile s32 *)((char*)arg0 + 0xC);
    volatile s32 *p3 = (volatile s32 *)((char*)arg0 + 0x18);
    volatile s32 *p5 = (volatile s32 *)((char*)arg0 + 0x24);
    ((volatile s32 *)arg0)[1] = 0;
    ((volatile s32 *)arg0)[0] = 0;
    p2[0] = 0;
    p2[2] = 0;
    p2[1] = 0;
    p3[0] = 0;
    p3[2] = 0;
    p3[1] = 0;
    p5[0] = 0;
    p5[2] = 0;
    ((volatile s32 *)arg0)[2] = 0;
    p5[1] = 0;
}
