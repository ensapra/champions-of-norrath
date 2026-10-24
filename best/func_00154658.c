typedef struct { f32 x, y, z; } Vec3_154658;
typedef struct { f32 f[12]; } Blk48_154658;

typedef struct {
    char pad0[0xC];
    s32 flags;          /* 0xC */
    char pad10[0xC];
    f32 unk1C;          /* 0x1C */
    char pad20[0x28];
    void *unk48;        /* 0x48 */
    s32 unk4C;          /* 0x4C */
    s32 unk50;          /* 0x50 */
    char pad54[0x94];
    s64 unkE8;          /* 0xE8 */
    char padF0[0x20];
    Blk48_154658 blk;   /* 0x110 */
    u16 unk140;         /* 0x140 */
} Obj_154658;

extern char D_0044D018[];
void func_001411F0(Obj_154658 *, Vec3_154658, s32, s32);
void func_00143630(Obj_154658 *);
void func_00143830(Obj_154658 *);

void func_00154658(Obj_154658 *p, Vec3_154658 v, s32 a2, s32 a3, s64 a4, s32 a5, Blk48_154658 *b) {
    func_001411F0(p, v, 0, 0);
    p->unk48 = D_0044D018;
    p->flags |= 0x5809;
    func_00143630(p);
    p->unk140 = a5 | 1;
    p->unk1C = 4.0f;
    __builtin_memcpy(&p->blk, b, sizeof(Blk48_154658));
    p->unk4C = a2;
    p->unk50 = a3;
    p->unkE8 = a4;
    if (p->unk140 & 2) {
        func_00143830(p);
        p->flags |= 0x4000;
    }
    if (p->unk140 & 4) {
        p->flags |= 0x1000;
    }
}
