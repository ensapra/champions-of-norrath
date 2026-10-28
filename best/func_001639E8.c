typedef struct {
    u8 pad0[0x1C];
    s16 s;
    u8 pad1E[2];
    f32 x;
    f32 y;
    u8 pad28[4];
    f32 b;
    f32 c;
} Q;
typedef struct {
    s32 *o;
    Q *q;
    u8 pad8[0x10];
    f32 f18;
    u16 flags;
    u8 pad1E[2];
} E;
typedef struct {
    u8 pad0[4];
    s8 n;
    u8 pad5[3];
    E e[1];
} Obj;
void func_00161528(E *);
f32 func_002F16B8(f32, f32);
extern f32 D_0047FF98;
extern s32 D_004844A4;

void func_001639E8(Obj *a)
{
    s32 i;
    E *e;
    f32 k;

    i = 0;
    if (a->n > 0) {
        k = D_0047FF98;
        e = a->e;
        do {
            e->f18 = func_002F16B8((f32)D_004844A4 * k * 60.0f, (f32)e->o[1]);
            if (e->flags & 0x800) {
                f32 d, x, y;
                func_00161528(e);
                d = e->f18 - (f32)e->q->s;
                x = e->q->x + e->q->b * d;
                y = e->q->y + e->q->c * d;
                e->q->y -= y;
                e->q->x -= x;
            }
            i++;
            e++;
        } while (i < a->n);
    }
}
