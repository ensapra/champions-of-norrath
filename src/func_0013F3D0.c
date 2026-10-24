extern s32 D_001C6828[];
extern s32 D_001C682C[];
extern s32 D_001C6830[];
void func_0011B968(s32);
void func_0013F3D0(void)
{
    s32 *p;
    p = D_001C6828;
    if (*p) {
        func_0011B968(*p);
        *p = 0;
    }
    p = D_001C682C;
    if (*p) {
        func_0011B968(*p);
        *p = 0;
    }
    p = D_001C6830;
    if (*p) {
        func_0011B968(*p);
        *p = 0;
    }
}
