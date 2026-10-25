typedef struct { f32 x, y, z, w; } V4;
typedef struct { V4 r[4]; } M4;

void func_00192428(V4 *, V4 *, f32);
void func_00191FD0(V4 *, V4 *);
void func_00192050(M4 *, M4 *);

void func_00192C40(M4 *m, V4 *a, V4 *b, V4 *c)
{
    V4 t;
    f32 zero, one;
    func_00192428(&t, a, -1.0f);
    func_00191FD0(&m->r[0], &t);
    func_00192428(&t, b, -1.0f);
    func_00191FD0(&m->r[1], &t);
    func_00192428(&t, c, -1.0f);
    func_00191FD0(&m->r[2], &t);
    zero = 0.0f;
    one = 1.0f;
    m->r[3].z = zero;
    m->r[3].w = one;
    m->r[3].y = zero;
    m->r[3].x = zero;
    func_00192050(m, m);
}
