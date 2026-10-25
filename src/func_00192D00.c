typedef struct { f32 x, y, z, w; } V4;
typedef struct { V4 r[4]; } M4;

void func_00192510(V4 *, V4 *);

void func_00192D00(M4 *m, V4 *a, V4 *b, V4 *c, V4 *d)
{
    func_00192510(&m->r[0], a);
    func_00192510(&m->r[1], b);
    func_00192510(&m->r[2], c);
    func_00192510(&m->r[3], d);
}
