extern s32 func_002E0478(s32, s32, ...);
extern s32 func_002D8610(void *, void *);
extern s32 func_002D86A8(void *);
extern s32 TerminateThread_2(s32);
extern s32 DeleteThread_2(s32);
extern s32 D_00446038[], D_0044603C[], D_00446040[], D_00446044[], D_00446048[];
extern s32 D_0044604C[], D_00446050[], D_00446054[], D_00446058[], D_0044605C[];
extern s32 D_008E6AC0[], D_008E6AD8[];

s32 func_002E08F0(void) {
    s32 ret;

    if (D_0044605C[0] < 0) return -1;
    func_002E0478(1, 0x8170, 0, 0);
    ret = 0;
    func_002E0478(1, 0x8160, 0, 0, 0);
    func_002E0478(1, 0x8160, 1, 0, 0);
    func_002E0478(1, 0xE630);
    D_00446038[0] = 0;
    D_0044603C[0] = 0;
    D_00446040[0] = 0;
    D_00446044[0] = 0;
    D_00446048[0] = 0;
    D_0044604C[0] = 0;
    D_00446050[0] = 0;
    D_00446054[0] = 0;
    D_00446058[0] = 0;
    if (func_002D8610(D_008E6AD8, D_008E6AC0) == 0) ret = -1;
    if (func_002D86A8(D_008E6AC0) == 0) ret = -1;
    if (TerminateThread_2(D_0044605C[0]) < 0) ret = -1;
    if (DeleteThread_2(D_0044605C[0]) < 0) ret = -1;
    D_0044605C[0] = -1;
    return ret;
}
