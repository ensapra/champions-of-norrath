/* identical to func_0031A950 (matched), with its names changed by decompdecomp */
extern s32 D_00453850[6];
void func_0031A990(s32 *arg0, s32 arg1) {
    arg0[0] = arg1;
    arg0[1] = (s32)D_00453850;
}
extern s32 D_00486DE0[3];
extern char D_011C2208[];
extern void func_002FD368(s32 *, char *);
s32 *__tfQ24Base16AutoVariableBase(void) {
    s32 *ptr = D_00486DE0;
    if (*ptr == 0) {
        func_002FD368(ptr, D_011C2208);
    }
    return ptr;
}
