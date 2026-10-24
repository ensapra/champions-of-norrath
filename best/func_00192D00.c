extern u8 jtbl_004C006C[];
void WaitSema(s32);
void func_001B14E8(void);

s32 func_001B1538(void)
{
    func_001B14E8();
    WaitSema(*(s32 *)(jtbl_004C006C + 0x3F38));
    return 0;
}

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

void func_00192708(M4 *);
void func_00191EF0(V4 *, V4 *, V4 *);
void func_00192490(M4 *, M4 *, V4 *);
void func_001920D8(M4 *, M4 *);

void func_00192B90(M4 *out, V4 *pos, V4 *at, V4 *up)
{
    M4 m;
    V4 d;
    func_00192708(&m);
    func_00191EF0(&d, up, at);
    func_00191FD0(&m.r[0], &d);
    func_00191FD0(&m.r[2], at);
    func_00191EF0(&m.r[1], &m.r[2], &m.r[0]);
    func_00192490(&m, &m, pos);
    func_001920D8(out, &m);
}
