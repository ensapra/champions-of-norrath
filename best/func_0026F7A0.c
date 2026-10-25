extern void func_00140678(char *, void *, s32);
extern f32 func_0015A070(s32);
extern f32 func_0015A100(s32);
extern void func_0026C190(void *, s32, void *, f32, f32, f32);
extern f32 D_0037EE80[3];
extern f32 D_0037EF00[12];
extern char D_00475D60[];
extern f32 D_00482154, D_00482158, D_0048215C;
extern s32 D_004844A4;

typedef struct { u8 pad[0x68]; s16 a; s16 b; } T;
typedef struct { f32 *p; u8 pad[0x2c]; } B;

void func_0026F7A0(T *arg0) {
    B buf;
    f32 v[3];
    f32 t;
    func_00140678(D_00475D60, &buf, 10);
    if (buf.p != 0) {
        t = func_0015A070((D_004844A4 * 0x50) % 0x10000);
        arg0->a += 0x21;
        arg0->b = (s32)(t * D_00482154 + D_00482158);
        v[0] = D_0037EE80[0] + (buf.p[4] - D_0037EE80[0]);
        v[1] = D_0037EE80[1] + (buf.p[5] - D_0037EE80[1]);
        v[2] = D_0037EE80[2] + ((buf.p[6] + 131.0f) - D_0037EE80[2]);
        func_0026C190(arg0, 0, buf.p, v[0], v[1], v[2]);
        t = func_0015A100((D_004844A4 * 0x51) % 0x10000) * 94.0f + D_0048215C;
        v[2] = v[2] - t * D_0037EF00[8];
        v[0] = v[0] - t * D_0037EF00[2];
        v[1] = v[1] - t * D_0037EF00[5];
        func_0026C190(arg0, 0, buf.p, v[0], v[1], v[2]);
    }
}
