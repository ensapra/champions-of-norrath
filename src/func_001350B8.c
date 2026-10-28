typedef struct { s32 x, y, z; } V3;
typedef struct { u8 pad[0x204]; u8 c[0x100]; u8 a[0x100]; u8 b[0x100]; V3 v; } Rec;
extern s32 D_001BB904[]; extern Rec D_001BB908[]; extern Rec D_001BD258[];
s32 func_001A42B8(void *, void *); void func_0011DA20(s32,s32);
void func_001350B8(void) {
 D_001BB908[D_001BB904[0]].v.x = D_001BD258[0].v.x;
 D_001BB908[D_001BB904[0]].v.y = D_001BD258[0].v.y;
 D_001BB908[D_001BB904[0]].v.z = D_001BD258[0].v.z;
 func_001A42B8(D_001BB908[D_001BB904[0]].a, D_001BD258[0].a);
 func_001A42B8(D_001BB908[D_001BB904[0]].b, D_001BD258[0].b);
 func_001A42B8(D_001BB908[D_001BB904[0]].c, D_001BD258[0].c);
 func_0011DA20(6,-1);
}
