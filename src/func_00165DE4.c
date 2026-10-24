typedef struct {
    s32 w[4];
    u64 pad[0x1EC];
    s32 w2[4];
} Pkt;
typedef struct {
    u8 pad[0x970];
    Pkt p0;
    Pkt p1;
} PktOwner;
void func_00165E98();
void func_00165FC8(void *);
void func_001660C4(void *);
s32 func_00170894(s32, s32, s32, s32);
void func_00165DE4(PktOwner *o)
{
    func_00165E98();
    func_00165FC8(o);
    func_001660C4(o);
    o->p0.w[0] = 0x100000F6;
    o->p0.w[1] = 0;
    o->p0.w[2] = 0;
    o->p0.w[3] = func_00170894(0x50, 0, 0xF6, 0);
    o->p0.w2[0] = 0x60000000;
    o->p0.w2[1] = 0;
    o->p0.w2[2] = 0;
    o->p0.w2[3] = 0;
    o->p1 = o->p0;
}
