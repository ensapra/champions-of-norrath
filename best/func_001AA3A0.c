typedef struct { f32 pad[5]; f32 x; f32 y; f32 rest[15]; } Pl;
typedef struct { char pad0[0x24]; void **p24; } Sub;
typedef struct { char pad0[0x5570]; Sub *sub; char pad1[0x6AE]; s8 type; char pad2[0x5DB0 - 0x5C1F]; } Ob;
typedef struct {
    char pad0[8];
    char pad1[0x118];
    char pad120[8];
    s8 cnt;
    char pad125[0x138 - 0x125 - 0x10 + 0x10];
} X;
f32 D_00480524;
f32 D_00480528;
u32 D_00483E5C;
extern Pl D_0034BEB8[];
extern Ob D_00408600[];
extern char D_00464B48[], D_00464B58[], D_00464B68[], D_00464B78[], D_00464B88[], D_00464B98[], D_004662C8[];
void *func_00165DC0(void *, char *);
void func_00160128(void *, f32, void *, s32);

void func_001AA3A0(char *t)
{
    s32 idx = *(s32 *)(t + 0x3C0);
    Pl *pl = &D_0034BEB8[idx];
    s32 i, r;
    char *s;
    if (D_00480524 < pl->x * pl->x + pl->y * pl->y) {
        if (t[0x453] == 0) return;
        i = 4;
        t[0x453] = 0;
        if (!((s8)t[0x124] - 1 < i)) {
            do {
                *(f32 *)(t + 0x138 + i * 0x20) = 1.0f;
                *(f32 *)(t + 0x13C + i * 0x20) = D_00480528;
                i++;
            } while (!((s8)t[0x124] - 1 < i));
        }
        return;
    }
    if (t[0x124] != 4) return;
    D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
    r = D_00483E5C >> 16;
    if (!(r % 0x10000 < 0xE2)) return;
    if (t[0x453] != 0) return;
    idx = *(s32 *)(t + 0x3C0);
    {
        s32 ty = D_00408600[idx].type;
        if (ty == 1) s = D_00464B48;
        else if (ty == 2) s = D_00464B58;
        else if (ty == 3) s = D_00464B68;
        else if (ty == 4) s = D_00464B78;
        else if (ty == 5) s = D_004662C8;
        else if (ty == 7) s = D_00464B88;
        else s = D_00464B98;
        func_00160128(t + 0x120, 0.5f, func_00165DC0(*D_00408600[idx].sub->p24, s), 1);
        t[0x453] = 1;
    }
}
