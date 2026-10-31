/* machine draft (m2c) for ee-gcc-2.96 -Os -G8 -mno-check-zero-division, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK audioDecCreate(M2C_UNK *, s32, s32, s32, s32, s32, s32, M2C_UNK); /* extern */
M2C_UNK clearBackground(M2C_UNK);                   /* extern */
s32 fillBuff(M2C_UNK *, M2C_UNK);                   /* extern */
M2C_UNK sceMpegAddCallback(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK sceMpegAddStrCallback(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK sceMpegCreate(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK sceSdRemote(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK sceSdRemoteInit();                          /* extern */
extern s32 D_011E9980;
extern M2C_UNK D_011E9988;
extern s32 D_011E99E8;
extern s32 D_011EDA00;
extern s32 D_011EDA04;
extern s32 D_011EDA08;
extern s32 D_011EDA0C;
extern s32 D_011EDA10;
extern s32 D_011EDA14;
extern s32 D_011EDA18;
extern M2C_UNK D_011EDA20;
extern M2C_UNK audioCallback;
extern M2C_UNK backgroundCallback;
extern M2C_UNK errorCallback;
extern M2C_UNK nodataCallback;
extern M2C_UNK videoCallback;

void playPssInit(s32 arg0, void *arg1) {
    s32 temp_2;
    s32 temp_4;

    D_011EDA04 = M2C_FIELD(arg1, s32 *, 0xC);
    sceSdRemoteInit();
    sceSdRemote(1, 0x8000, 0);
    audioDecCreate(&D_011E9988, M2C_FIELD(arg1, s32 *, 0x18), M2C_FIELD(arg1, s32 *, 0x1C), M2C_FIELD(arg1, s32 *, 0x20), M2C_FIELD(arg1, s32 *, 0x24), M2C_FIELD(arg1, s32 *, 0x28), M2C_FIELD(arg1, s32 *, 0x2C), 0x800);
    D_011E9980 = 0;
    clearBackground(0x80404040);
    sceMpegCreate(&D_011EDA20, M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4));
    sceMpegAddStrCallback(&D_011EDA20, 0, 0, &videoCallback, 0);
    sceMpegAddStrCallback(&D_011EDA20, 2, 0, &audioCallback, 0);
    sceMpegAddCallback(&D_011EDA20, 1, &nodataCallback, 0);
    sceMpegAddCallback(&D_011EDA20, 4, &backgroundCallback, 0);
    sceMpegAddCallback(&D_011EDA20, 0, &errorCallback, 0);
    D_011EDA00 = 0;
    temp_2 = M2C_FIELD(arg1, s32 *, 0x10);
    D_011EDA08 = temp_2;
    temp_4 = temp_2 + 0x10;
    D_011EDA14 = temp_2;
    D_011EDA0C = M2C_FIELD(arg1, s32 *, 0x14);
    D_011EDA18 = temp_4;
    D_011E99E8 = arg0;
    D_011EDA10 = temp_4;
    do {

    } while (fillBuff(&D_011EDA20, 1) != 0);
}
