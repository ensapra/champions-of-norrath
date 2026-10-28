typedef struct { char pad[0x3C]; u8 type; } Owner;
typedef struct { f32 x, y, z; } Vec3;
typedef struct { char pad[0x10]; Vec3 t; } Mat;
typedef struct {
    char pad0[4]; s8 active; char pad5; s16 f6; Owner *owner;
    char padC[0x1C]; char f28[4]; Vec3 pos; u16 id; s8 f3A, f3B, f3C; char pad3D[3];
    f32 vol, f44, f48;
} Slot;
extern Slot D_007D8110[];
extern s8 D_0042DE58[];
extern u16 D_00485940;
s32 func_00163830(void *, void *, s32);
s32 func_00194300(void *);
s32 func_00194390(void *, void *, void *);
s8 func_001D0E70(void);

s32 func_0024D308(Owner *o, Mat *pos, f32 vol)
{
    s32 free;
    s32 count;
    s32 i;
    u8 type;
    char *s;
    Slot *t;
    Vec3 *d;

    if (!o) return -1;
    type = o->type;
    free = -1;
    count = 0;
    t = D_007D8110;
    s = (char *)t + 8;
    for (i = 0; i < 32; i++, s += 0x4C) {
        if (!*(s8 *)(s - 4)) {
            free = i;
        } else if ((*(Owner **)s)->type == type) {
            count++;
            if (type && count >= D_0042DE58[type]) return -1;
        }
    }
    if (free == -1) return -1;
    D_007D8110[free].f6 = 0;
    func_00163830(&D_007D8110[free], o, 4);
    if (pos) {
        func_00194300(D_007D8110[free].f28);
        func_00194390(D_007D8110[free].f28, pos, pos);
        d = &D_007D8110[free].pos;
        *d = pos->t;
        D_007D8110[free].f3A = 0;
    } else {
        D_007D8110[free].f3A = 1;
    }
    D_007D8110[free].f3B = func_001D0E70();
    D_007D8110[free].id = D_00485940;
    D_00485940 = (D_00485940 + 1) & 0x7f;
    D_007D8110[free].f3C = 0;
    D_007D8110[free].vol = vol;
    D_007D8110[free].f44 = 360.0f;
    D_007D8110[free].f48 = 840.0f;
    return free | (D_007D8110[free].id << 8) | 0x8000;
}
