typedef struct { s16 x; s16 y; } XY16;
typedef struct {
    s32 a;
    s32 pad[7];
    XY16 xy;
    s32 pad2;
} Ent1E0;

typedef struct {
    u8 pad[0x18];
    s32 x;
    s32 y;
} Pos;

extern Ent1E0 D_010EA1E0[];
extern u8 func_001CE218[];
void func_0018E0C0(s32);

static inline void SetPos(XY16 *s) {
    Pos *p = (Pos *)(func_001CE218 + 0x2010);
    p->x = s->x;
    p->y = s->y;
}

void func_00174F54(s32 i) {
    func_0018E0C0(D_010EA1E0[i].a + 0x10);
    SetPos(&D_010EA1E0[i].xy);
}
