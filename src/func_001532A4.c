extern s32 func_0014CA30(s32);
extern u8 func_001C8098[];

typedef struct {
    char pad_0[0x910];
    s32 unk_910;
    s32 unk_914;
    s32 unk_918;
    char pad_1[0x24];
    s32 unk_940;
    s32 unk_944;
    s32 unk_948;
} S1532A4;

void func_001532A4(S1532A4 *arg0) {
    (*(void (**)(void))((char *)func_001C8098 + 0xD68))();
    if (arg0->unk_940 != 0) {
        func_0014CA30(arg0->unk_910);
    }
    if (arg0->unk_944 != 0) {
        func_0014CA30(arg0->unk_914);
    }
    if (arg0->unk_948 != 0) {
        func_0014CA30(arg0->unk_918);
    }
}
