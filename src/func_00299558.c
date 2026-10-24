/* identical to func_00298B00 (matched), with its names changed by decompdecomp */
typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P;
extern "C" {
s32 func_001441B8(s32) throw();
void func_00194300(void *) throw();
void func_00298E10(s32, s32, s32, s32) throw();
}

struct H {
    s32 v;
    H() { v = 0; }
    ~H() { func_00194300(this); }
};

s32 func_00299558(s32 a, s32 b, s32 c, P *d)
{
    volatile P copy = *d;
    H h;
    s32 r = func_001441B8(0x78);
    if (r)
        func_00298E10(r, b, c, a);
    return r;
}
