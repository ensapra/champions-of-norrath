void func_00192708(f32 *);
void func_00191E60(f32 *, f32 *, f32 *);

void func_00192D68(f32 *o, f32 a, f32 b, f32 c, f32 d, f32 e, f32 f, f32 g, f32 h, f32 i) {
    f32 m[16];
    f32 nf = -f;
    f32 ng = -g;
    f32 nh = -h;
    f32 t = nf + g;
    f32 z = i * h;
    f32 w = ng * h;
    f32 den;
    z = z * t;
    w = w + f * i;
    den = nh + i;
    z = z / den;
    w = w / den;
    func_00192708(o);
    o[0] = a;
    o[5] = a;
    o[10] = 0;
    o[15] = 0;
    o[11] = 1.0f;
    o[14] = 1.0f;
    func_00192708(m);
    m[0] = b;
    m[5] = c;
    m[10] = z;
    m[12] = d;
    m[13] = e;
    m[14] = w;
    func_00191E60(o, m, o);
}
