s32 func_0018AEA8(s32, s32, void *);
void *func_001A2660(void *, s32, u32);
extern s32 func_001BA380[];

typedef struct {
    s32 unk0;
    s32 unk4;
    u16 *unk8;
    s32 unkC;
} Info_00100410;

s32 func_00100410(s32 arg0, s16 *arg1) {
    Info_00100410 info;
    u16 *ptr;

    func_001A2660(&info, 0, sizeof(info));
    if (func_0018AEA8(func_001BA380[0], arg0, &info) == -1) {
        return -1;
    }
    ptr = info.unk8;
    if (ptr != NULL) {
        arg1[0] = ptr[0] << 4;
        arg1[1] = ptr[1] << 4;
        arg1[2] = ptr[2] << 4;
        arg1[3] = ptr[3] << 4;
        arg1[4] = ptr[4] << 4;
        arg1[5] = ptr[5] << 4;
        arg1[6] = ptr[6] << 4;
    }
    return 0;
}
