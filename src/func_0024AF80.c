typedef struct { u8 data[0x30]; } Sub24AF80;
typedef struct { s32 a0; s32 a4; s32 a8; s32 aC; } Q24AF80;
typedef struct {
    u8 b0;
    char pad1[0xF];
    Q24AF80 q10;
    Q24AF80 q20;
    char pad30[0x10];
    Sub24AF80 sub[8];
    s32 f1C0;
} Ent24AF80;
typedef struct { s32 id; s32 pad[3]; } Msg24AF80;
extern Ent24AF80 D_007DD290[];
extern char D_007DD7E0[];
extern char D_007DD840[];
extern Msg24AF80 D_007DD880;
void func_003021B0(void *, s32, s32);
void func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);

void func_0024AF80(s32 id)
{
    Msg24AF80 m;
    s32 i;
    D_007DD290[id].b0 = 0;
    D_007DD290[id].q10.a4 = 0;
    D_007DD290[id].q10.aC = 0;
    D_007DD290[id].f1C0 = 0;
    D_007DD290[id].q20.a0 = 0;
    D_007DD290[id].q20.a4 = 0;
    for (i = 0; i < 8; i++) {
        func_003021B0(&D_007DD290[id].sub[i], 0, 0x30);
    }
    m.id = id;
    D_007DD880 = m;
    func_002D8270(D_007DD7E0, 0x60, 0, &D_007DD880, 0x10, D_007DD840, 0x40, 0, 0);
}
