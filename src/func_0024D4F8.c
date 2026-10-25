struct Vec3 { f32 x, y, z; Vec3() {} };
struct Owner { char pad[0x3C]; u8 type; };
struct Slot {
    char pad0[4]; s8 active; char pad5; s16 f6;
    Owner *owner; char padC[0x1C];
    char f28[4]; Vec3 pos;
    u16 id; s8 f3A; s8 f3B; s8 f3C; char pad3D[3];
    f32 vol, f44, f48;
};
extern "C" {
extern Slot D_007D8110[];
extern s8 D_0042DE58[];
extern u16 D_00485940;
void func_00163830(void *, void *, s32);
void func_00194300(void *);
s8 func_001D0E70(void);

s32 func_0024D4F8(Owner *o, Vec3 pos, f32 vol) {
    s32 i;
    s32 free;
    s32 cnt;
    u8 type;
    if (o == NULL) return -1;
    type = o->type;
    free = -1;
    cnt = 0;
    for (i = 0; i < 32; i++) {
        if (D_007D8110[i].active == 0) {
            free = i;
        } else if (D_007D8110[i].owner->type == type) {
            cnt++;
            if (type != 0 && cnt >= D_0042DE58[type]) return -1;
        }
    }
    if (free == -1) return -1;
    D_007D8110[free].f6 = 0;
    func_00163830(&D_007D8110[free], o, 4);
    func_00194300(D_007D8110[free].f28);
    D_007D8110[free].pos = pos;
    D_007D8110[free].f3A = 0;
    D_007D8110[free].f3B = func_001D0E70();
    D_007D8110[free].id = D_00485940;
    D_00485940 = (D_00485940 + 1) & 0x7F;
    D_007D8110[free].f3C = 0;
    D_007D8110[free].vol = vol;
    D_007D8110[free].f44 = 360.0f;
    D_007D8110[free].f48 = 840.0f;
    return free | (D_007D8110[free].id << 8) | 0x8000;
}
}
