typedef struct { s32 w[4]; u64 pad[0x334]; s32 w2[4]; } PktF;
typedef struct { u8 pad[0x910]; PktF p0; PktF p1; } OwnerF;
void func_00160068();
void func_0015FF30(void *);
void func_00160264(void *);
void func_0016049C(void *);
s32 func_00170894(s32, s32, s32, s32);
void func_0015FE74(OwnerF *o) {
    func_00160068();
    func_0015FF30(o);
    func_00160264(o);
    func_0016049C(o);
    o->p0.w[0] = 0x1000019A;
    o->p0.w[1] = 0;
    o->p0.w[2] = 0;
    o->p0.w[3] = func_00170894(0x50, 0, 0x19A, 0);
    o->p0.w2[0] = 0x60000000;
    o->p0.w2[1] = 0;
    o->p0.w2[2] = 0;
    o->p0.w2[3] = 0;
    o->p1 = o->p0;
}

void func_001517DC(s32, void *, void *);
typedef struct { u8 pad[0x924]; s32 x924; s32 x928; } H;
void func_0015FC30(H *o, s32 mode) {
    s32 v[4];
    v[0] = 12;
    switch (mode) {
    case 0:
        func_001517DC(o->x924, o, v);
        break;
    case 1:
        func_001517DC(o->x928, o, v);
        break;
    }
}
