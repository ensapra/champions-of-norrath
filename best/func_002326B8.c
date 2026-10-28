struct Vec3 { f32 x, y, z; Vec3() {} };
struct Obj2326B8 {
    char pad0[0x110];
    Vec3 p110;
    char padx[4];
    char blk120[0x11C];
    s16 f23C;
    char pad23E[0x182];
    char blk3C0[0x6C];
    char blk42C[0x44];
    s32 f470;
};
extern "C" {
extern char D_00472128[];
extern char D_00472138[];
extern char D_00485828[];
extern char D_00485838[];
extern const f32 D_004819D0;
extern const f32 D_004819D4;
void func_0010D250(Vec3 *, void *, s32);
s32 func_001129F0(void *, void *);
s32 func_00152CC8(void *, char *);
void func_00160128(void *, s32, s32, f32);
void func_001639E8(void *);
s32 func_00165DC0(void *, char *);
s32 func_00304168(void *, char *);

void func_002326B8(Obj2326B8 *o, s32 arg1) {
    if (func_001129F0(o, &arg1) == 0) {
        s32 m = arg1;
        if (m == 1) goto one;
        if (m < 2) {
            if (m == 0) {
                s32 a = 0;
                if (o->f470 != 0 && func_00304168(o->blk42C, D_00485838) == 0) {
                    a = func_00165DC0(o->blk3C0, D_00472128);
                }
                if (a != 0 || (a = func_00152CC8(o, D_00485828)) != 0) {
                    func_00160128(o->blk120, a, 3, D_004819D0);
                }
            }
        }
        goto done;
one: {
            Vec3 v;
            func_0010D250(&v, o, 0xC8);
            Vec3 w = v;
            o->p110 = w;
            if (o->f23C != m) {
                void *b = o->blk120;
                func_00160128(b, func_00165DC0(o->blk3C0, D_00472138), 0x803, D_004819D4);
                func_001639E8(b);
            }
        }
done:
        o->f23C = arg1;
    }
}
}
