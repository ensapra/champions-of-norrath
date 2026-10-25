typedef struct { f32 x, y, z; } V3;
typedef struct { char p[0xC]; s32 c; } Sub;
typedef struct {
    char p0[0x10]; V3 pos;
    char p1[0x24 - 0x1C]; Sub *s24;
    char p2[0x38 - 0x28]; s16 h38;
    char p3[0x4C - 0x3A]; s8 b4C; s8 b4D; s8 b4E; s8 b4F;
    s32 i50; s8 b54; s8 b55; s8 b56; s8 b57;
    s32 i58; s32 i5C; s8 b60;
    char p4[0x7C - 0x61]; f32 f7C;
    char p5[0xE4 - 0x80]; s32 iE4;
    char p6[0xF0 - 0xE8]; f32 fF0; s32 iF4;
} O;
extern f32 D_004825C4, D_004825C8;
s8 func_00142158(void *, s8, s32);
s32 func_001441B8(s32);
f32 func_0015A070(s16);
f32 func_0015A100(s16);
void func_001639C8(void *, void *, s32, s32);
void func_00168A38(s32, V3 *, s16, void *, s32, void *, void *, f32);
s32 func_001D3E88(s32);
void func_00289D60(s32, V3 *, s16, s32, V3 *, V3 *, s32);
void func_0028B830(s32, s32);

void func_0028BD08(O *o) {
    V3 dir;
    char pad1[0x30];
    V3 b;
    V3 a;
    V3 c;
    char pad2[4];
    V3 d;
    s32 obj;
    f32 t;
    if (o->b57 != 0) return;
    o->b4C = func_00142158(o, o->b4C, 0x640);
    if (o->b4C == 0) return;
    if (o->iF4 != 0) {
        o->iF4--;
        return;
    }
    t = o->f7C;
    if (o->b54 == 0 && o->b4E == 0) {
        if (t < D_004825C4) {
            o->b54 = 1;
            if (o->i50 != 0 && func_001D3E88(o->i50) == 0) {
                o->b55 = 0;
            } else {
                dir.x = func_0015A070(o->h38);
                dir.y = func_0015A100(o->h38);
                dir.x = dir.x * o->fF0;
                dir.y = dir.y * o->fF0;
                dir.z = o->fF0 * 0.5f;
                obj = func_001441B8(0xB8);
                if (obj != 0) {
                    a.x = 0.0f;
                    a.y = 0.0f;
                    a.z = 100.0f;
                    b.x = o->pos.x + a.x;
                    b.y = o->pos.y;
                    b.z = o->pos.z + a.z;
                    c = o->pos;
                    func_00289D60(obj, &c, o->h38 - 0x8000, 0, &b, &dir, 1);
                } 
                o->i58 = obj;
                if (o->i58 != 0) func_0028B830(o->i58, 1);
                o->b4E = 1;
                o->b55 = 1;
            }
        }
    } else if (D_004825C8 < t) {
        if (o->b4E != 0) {
            if (o->i58 != 0) func_0028B830(o->i58, 0);
            o->i58 = 0;
            o->b4E = 0;
        }
        o->b54 = 0;
    }
    if (o->b60 != 0) func_001639C8(&o->i5C, &o->pos, 0, 0);
    if (o->i58 != 0) {
        d = o->pos;
        func_00168A38(o->s24->c, &d, o->h38, &o->i5C, 0, (char *)o->i58 + 0x10, &o->iE4, 1.0f);
    }
}
