typedef struct R { char pad[0x38]; s32 didinit; } R;
typedef struct F { char pad[0x54]; R *data; } F;
extern s32 D_00448480[];
extern void func_003001A8(R *, F *);
extern void func_0030C8A0(R *, F *, s32, s32);

void func_0030C828(F *fp, s32 a, s32 b) {
    R *r = fp->data;
    if (r == NULL) {
        r = (R *)D_00448480[0];
        fp->data = r;
    }
    if (r->didinit == 0) {
        func_003001A8(r, fp);
        r = fp->data;
    }
    func_0030C8A0(r, fp, a, b);
}
