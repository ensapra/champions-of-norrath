extern s32 D_004F3600;
void func_00135710(s32 arg0, s32 arg1) {
    s32 off = arg0 * 12;
    volatile s32 *p = (volatile s32 *)((char *)&D_004F3600 + off);
    s32 old = p[0];
    p[2] = 1;
    p[0] = arg1 >= old ? arg1 : old;
    p[1] = -1;
}
