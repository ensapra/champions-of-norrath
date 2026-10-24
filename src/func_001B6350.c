extern u8 D_00507660[];
extern s32 D_004C52F0[];
void _ExecOSD(s32, s32);
void func_001B6150(void *, s32, s32);
void func_001B6268(void);

void func_001B6350(s32 arg0, s32 arg1) {
    func_001B6150(D_00507660, arg0, arg1);
    func_001B6268();
    _ExecOSD(arg0, D_004C52F0[0] + 4);
}

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
    if (mode == 0) {
        func_001517DC(o->x924, o, v);
    } else if (mode == 1) {
        func_001517DC(o->x928, o, v);
    }
}

s32 func_0016FA70(s32);
typedef struct { u8 pad[0x4D0]; s32 x4D0; u8 p1[0x910 - 0x4D4]; s32 x910; s32 x914; u8 p2[0x924 - 0x918]; s32 x924; s32 x928; } K;
void func_0015C030(K *o) {
    if (o->x924 != 0) {
        o->x910 = func_0016FA70(o->x924);
    } else {
        o->x910 = 0;
    }
    o->x924 = 0;
    if (o->x928 != 0) {
        o->x914 = func_0016FA70(o->x928);
    } else {
        o->x914 = 0;
    }
    o->x4D0 = 0;
    o->x928 = 0;
}
