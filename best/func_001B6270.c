extern u8 D_00507660[];
extern s32 D_004C52F0[];
void func_001B6150(void *, s32, s32);
void func_001B6268(void);
s32 _ExecPS2(void *, void *, s32, char **);
s64 func_001B6270(void *entry, void *gp, s32 argc, char **argv){
    func_001B6150(D_00507660, argc, (s32)argv);
    func_001B6268();
    return _ExecPS2(entry, gp, argc, (char **)(D_004C52F0[0] + 4));
}
