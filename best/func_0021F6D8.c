struct Vec3 { f32 x, y, z; Vec3() {} };

extern "C" {
extern char D_00470D88[];
extern char D_00470DA0[];
extern char D_00470DB8[];
extern char D_00470DD0[];
extern char D_00485508[];
extern s32 D_004844A4;
}

struct Anim {
    s32 unk0;
    s32 len;
};

struct Obj {
    char pad0[0xC];
    s32 flags;
    Vec3 pos;
    char pad1C[0x98 - 0x1C];
    char unk98[0xC8 - 0x98];
    s64 unkC8;
    s32 unkD0;
    s32 unkD4;
    s32 unkD8;
    s16 unkDC;
    s16 unkDE;
    s32 unkE0;
    s32 unkE4;
    s32 unkE8;
    s32 unkEC;
    s8 unkF0;
    char padF1[3];
    Anim *unkF4;
};

extern "C" {
void func_00143830(Obj *);
void func_00163830(void *, Anim *, s32);
s32 func_00165DC0(char *, char *);
void func_001C4190(s32, Vec3, s32);
void func_0024D308(s32, Obj *, f32);

void func_0021F6D8(Obj *o, s32 arg1)
{
    o->unkE8 = D_004844A4;
    if (o->unkF4 != NULL) {
        o->unkE8 = D_004844A4 + o->unkF4->len / 3;
    }
    if (o->unkD8 == 0) {
        switch (o->unkF0) {
        case 0:
            func_0024D308(func_00165DC0(D_00485508, D_00470D88), o, 1.0f);
            break;
        case 1:
            func_0024D308(func_00165DC0(D_00485508, D_00470DA0), o, 1.0f);
            break;
        case 2:
            func_0024D308(func_00165DC0(D_00485508, D_00470DB8), o, 1.0f);
            break;
        }
        func_00163830(o->unk98, o->unkF4, 0x204);
        o->unkD8 = 1;
        func_00143830(o);
        o->unkE0 = o->unkE8;
        if (o->unkDC <= 0) {
            o->flags &= ~0x100000;
        }
    } else {
        o->unkC8 = 1;
        func_0024D308(func_00165DC0(D_00485508, D_00470DD0), o, 1.0f);
        func_001C4190(arg1, o->pos, o->unkDC);
        o->unkDC = 0;
    }
}
}
