typedef struct { s32 a, b, c, pad[5]; s32 w, h, x, y, pad2[5]; s32 z; } S1D0228;
extern s32 D_001D0220[]; extern S1D0228 D_001D0228;
extern void func_0018D7B8(void); extern void func_0018D618(s32,s32,s32,s32); extern void func_0018E538(s32,s32);
void func_00172718(s32 a){
    D_001D0220[0] = 0;
    switch (a) {
    case 1: D_001D0228.a = 0; D_001D0228.b = 0; D_001D0228.c = 0x3B; break;
    case 2: D_001D0228.c = a; D_001D0228.b = 1; D_001D0228.a = 0; break;
    case 4: D_001D0228.c = 3; D_001D0228.b = 1; D_001D0228.a = 0; break;
    case 0:
    default: D_001D0228.a = 1; D_001D0228.b = 1; D_001D0228.c = 2; break;
    }
    D_001D0228.w = 0x800; D_001D0228.h = 0x800; D_001D0228.y = 0; D_001D0228.x = 0; D_001D0228.z = 0;
    func_0018D7B8();
    func_0018D618(0, (s16)D_001D0228.b, (s16)D_001D0228.c, (s16)D_001D0228.a);
    func_0018E538(0, 0);
}
