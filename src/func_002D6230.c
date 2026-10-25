typedef struct { s32 a; s32 b; u8 *c; u8 *d; u8 data[256]; } Pool;
extern Pool D_008DE500;
Pool *func_002D6230(s32 a) { D_008DE500.a = a; D_008DE500.b = 0; D_008DE500.d = D_008DE500.data; D_008DE500.c = D_008DE500.data; return &D_008DE500; }
