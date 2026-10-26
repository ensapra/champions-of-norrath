typedef struct { f32 x, y, z; } V3;
typedef struct { char pad[0x10]; f32 x, y, z; char pad2[0x30]; s8 a; u8 b; } E;
extern s32 func_00153FA8(void *);
extern void func_00143878(void *);
extern void func_00180DA0(void *, void *, void *, s32);
extern f32 D_00481988;
extern char D_007D7D30[];

#define RND(p) (2.0f * ((f32)func_00153FA8(p) * 0.0000152587890625f) - 1.0f)

void func_00230610(E *e) {
    V3 a, b;
    V3 *pa = &a, *pb = &b;
    V3 *pc = pb;
    f32 k = D_00481988;
    s32 n = 0;
    do {
        do {
            pa->x = RND(e);
            pa->y = RND(e);
            pa->z = RND(e);
        } while (pa->x * pa->x + pa->y * pa->y + pa->z * pa->z > 1.0f);
        a.x = 0; a.y = 0;
        a.z = a.z * k + 3.5f;
        do {
            pb->x = RND(e);
            pb->y = RND(e);
            pb->z = RND(e);
        } while (pb->x * pb->x + pb->y * pb->y + pb->z * pb->z > 1.0f);
        pb->z = pb->z * 2.0f;
        pc->x = pc->x * 2.0f;
        pb->y = pb->y * 2.0f;
        if (pb->z < 0.0f) pb->z = -pb->z;
        n--;
        b.y = e->y;
        b.x = e->x;
        b.z = b.z + e->z + 5.0f;
        func_00180DA0(D_007D7D30, &b, &a, 0);
    } while (n >= 0);
    if (e->b >= 0x1F) {
        func_00143878(e);
        e->a = 0;
    }
    e->b++;
}
