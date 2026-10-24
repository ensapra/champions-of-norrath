typedef struct {
    s32 w[4];
    u64 pad[0x2C];
    s32 w2[4];
} PktE;
typedef struct {
    u8 pad[0x970];
    PktE p0;
    PktE p1;
} OwnerE;
void func_0016E9E0();
s32 func_00170894(s32, s32, s32, s32);

void func_0016E93C(OwnerE *o) {
    func_0016E9E0();
    o->p0.w[0] = 0x10000016;
    o->p0.w[1] = 0;
    o->p0.w[2] = 0;
    o->p0.w[3] = func_00170894(0x50, 0, 0x16, 0);
    o->p0.w2[0] = 0x60000000;
    o->p0.w2[1] = 0;
    o->p0.w2[2] = 0;
    o->p0.w2[3] = 0;
    o->p1 = o->p0;
}
