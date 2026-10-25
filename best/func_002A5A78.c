extern u8 D_008D7270[];
extern void *func_001353D8(s32);
extern s32 func_0015E948(void *);
extern void func_0016C238(void *, void *, void *, s16, s32, void *, void *, s32, f32);
extern s32 func_0016CD50(void *);
extern void func_00180DA0(void *, void *, void *, f32);

typedef struct { f32 x, y, z; } Vec3;

static inline void scale(Vec3 *o,volatile Vec3 *v,f32 k){o->x=v->x*k;o->y=v->y*k;o->z=v->z*k;}
void func_002A5A78(u8 *arg0) {
    s32 i = 0;
    u8 *node;
    s32 n;

    struct { f32 out; char p0[12]; Vec3 out12; char p1[4]; Vec3 c; char p2[4]; Vec3 src; char p3[4]; Vec3 s; char p4[4]; Vec3 t; char p5[4]; Vec3 v; char p6[4]; } frame;
    void *volatile p120;
    Vec3 *volatile p10;
    f32 inv = 0.0000152587890625f;
    f32 one = 1.0f;
    f32 k = 13.0f;

    node = func_001353D8(*(s32 *)(arg0 + 0xC));
    {void *res=*(void **)(node+0x534);p120=node+0x120;p10=(Vec3 *)(node+0x10);n=func_0016CD50(res);}

    do {
        s32 r = func_0015E948(arg0) % n;
        __builtin_memcpy(&frame.src,p10,12);
        func_0016C238(*(void **)(node + 0x534), p120, &frame.src, *(s16 *)(node + 0x38), r, &frame.out12, &frame.out, 0, 1.0f);
        do {
            frame.v.x = 2.0f * ((f32)func_0015E948(arg0) * inv) - one;
            frame.v.y = 2.0f * ((f32)func_0015E948(arg0) * inv) - one;
            frame.v.z = 2.0f * ((f32)func_0015E948(arg0) * inv) - one;
        } while (frame.v.x * frame.v.x + frame.v.y * frame.v.y + frame.v.z * frame.v.z > one);
        frame.t = *(volatile Vec3 *)&frame.v;
        scale(&frame.s,&frame.t,k);
        frame.c = frame.s;
        func_00180DA0(&D_008D7270, &frame.out12, &frame.c, 0.0f);
        i++;
    } while (i < 203);
}
