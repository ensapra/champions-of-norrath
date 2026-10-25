typedef struct { char pad[0x30]; s32 id; s32 f34; char pad2[0x138 - 0x38]; } Entry180;
typedef struct { char hdr[0x100]; Entry180 e[16]; } Mgr180;
extern Mgr180 D_006F5AD0;
extern s32 D_00484308;
void func_001590C0(void *arg0);

s32 func_00180260(void) {
    s32 i;

    for (i = 0; i < 16; i++) {
        if (D_006F5AD0.e[i].id == 0)
            break;
    }
    if (i == 16)
        return 0;
    D_006F5AD0.e[i].id = (D_00484308++ << 8) | i;
    func_001590C0(&D_006F5AD0.e[i]);
    D_006F5AD0.e[i].f34 = 0;
    return D_006F5AD0.e[i].id;
}
