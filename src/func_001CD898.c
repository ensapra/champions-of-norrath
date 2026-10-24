typedef struct { u8 pad[0x10]; f32 x; f32 y; } Obj898;
typedef struct { u8 pad[0x5570]; Obj898 *obj; u8 pad2[0x5DB0 - 0x5574]; } Slot898;
extern f32 D_0037EE90[];
extern Slot898 D_00408600[];
extern s8 D_00483AC9;
extern s32 D_00484538;
s32 func_001CD898(f32 *pos, f32 r) {
    s32 i;
    Obj898 *o;
    if (D_00483AC9) {
        i = 0;
        if (pos[0] <= D_0037EE90[0] + r && D_0037EE90[0] - r <= pos[0]
            && pos[1] <= D_0037EE90[1] + r && D_0037EE90[1] - r <= pos[1]) {
            i = 1;
        }
        return i;
    }
    for (i = 0; i < D_00484538; i++) {
        o = D_00408600[i].obj;
        if (o != 0 && pos[0] <= o->x + r && o->x - r <= pos[0]
            && pos[1] <= o->y + r && o->y - r <= pos[1]) {
            break;
        }
    }
    return i != D_00484538;
}
