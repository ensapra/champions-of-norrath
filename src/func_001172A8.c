typedef struct { s32 type; s64 x; s32 y; s64 z; } Msg;
extern s32 D_001BD97C[], D_001BD980[], D_001BD970[], D_001BD974[];
extern s32 D_010C2B8C[], D_010C2B90[];
void func_0013B8F0(void *, void *);
s32 func_0014CBF4(s32, void *, s32);
void func_001172A8(void) {
 Msg m; s64 pad[4];
 func_0013B8F0(D_001BD97C, D_001BD980);
 if (D_001BD97C[0] != D_001BD970[0] || D_001BD980[0] != D_001BD974[0]) {
 m.type=13; m.x=D_001BD97C[0]+16; m.y=15; m.z=D_001BD980[0]+16;
 func_0014CBF4(D_010C2B8C[0], &m, 2); func_0014CBF4(D_010C2B90[0], &m, 2);
 D_001BD970[0]=D_001BD97C[0]; D_001BD974[0]=D_001BD980[0];
 }}
