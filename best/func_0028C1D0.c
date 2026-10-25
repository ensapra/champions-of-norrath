typedef struct { f32 x, y, z; } V3;
typedef struct { char pad[0x12]; s8 n; } T;
s32 func_00140F60(void *, char *, s32);
void func_001437E8(void *);
void func_00143830(void);
s32 func_00143A80(void *, char *, s32);
void *func_001441B8(s32);
void func_00149068(void *, V3 *, char *, char *, char *, s32, s32, s32, f32);
u16 func_00153FA8(void *);
void func_00154BA8(void *, s32);
T *func_00165DC0(char *, char *);
void func_001D3E88(s32);
void func_0028B828(s32);
void func_0028B830(s32, s32);
extern char D_00477798[], D_004777E8[], D_004777F8[], D_00477810[], D_00477828[];
s8 D_00484318;
typedef struct { char p0[0x10]; V3 pos; char p1[0x30]; s8 f4c; char p2; s8 f4e; char p3[8]; s8 f57; s32 f58; } O;
void func_0028C1D0(O *o, O *b) {
    T *t;
    s32 i, flag;
    void *e;
    if (o->f57 == 0) {
        o->f57 = 1;
        if (o->f4c == 0) func_00143830();
        flag = 0;
        if (func_00143A80(o, D_004777E8, 0)) flag = func_00140F60(o, D_004777E8, 0) != 0;
        t = func_00165DC0(D_00477798, D_004777F8);
        for (i = 0; i < t->n; i++) {
            if (flag == 0 || (func_00153FA8(o) & 1)) {
                V3 v;
                e = func_001441B8(0x248);
                v = o->pos;
                func_00149068(e, &v, D_00477798, D_004777F8, D_00477810, 1 << i, 0x216, 0, 1.0f);
                if (e && !(func_00153FA8(o) & 7)) func_00154BA8(e, 1);
            }
        }
        if (o->f4e) {
            if (o->f58 && !D_00484318) {
                V3 *d;
                f32 dx, dy, dz, r;
                func_0028B830(o->f58, 0);
                func_0028B828(o->f58);
                d = (V3 *)(o->f58 + 0x4C);
                dx = o->pos.x - b->pos.x;
                o->f58 = 0;
                d->x = dx;
                dy = o->pos.y - b->pos.y;
                d->y = dy;
                dz = o->pos.z - b->pos.z;
                r = 1.0f / __builtin_sqrtf(dx*dx + dy*dy + dz*dz);
                d->z = dz * r * 4.0f;
                d->x = dx * r * 4.0f;
                d->y = dy * r * 4.0f;
                o->f4e = 0;
            }
        }
        {
            s32 r = func_00143A80(o, D_00477828, 0);
            if (r) func_001D3E88(r);
        }
        func_001437E8(o);
    }
}
