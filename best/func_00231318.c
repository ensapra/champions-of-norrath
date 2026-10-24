typedef struct { s32 a, b, c; } V12;
typedef struct { s32 pad[4]; V12 pos; s32 pad2[27]; s8 f88; s8 f89; } Obj;
extern "C" {
void func_00143830(void *);
void func_001815C8(V12, s32, s32, s32, s32, s32, s32, s32, f32, f32);
extern f32 D_004819C4;
extern s32 D_00484F74;
void func_00231318(Obj *arg0);
}

void func_00231318(Obj *arg0) {
    func_001815C8(arg0->pos, 0x80, 0x64, 0x5A, 0x73, D_00484F74, 0, 2, 13.0f, D_004819C4);
    arg0->f89 = 0;
    if (arg0->f88 == 0) {
        func_00143830(arg0);
        arg0->f88 = 1;
    }
}
