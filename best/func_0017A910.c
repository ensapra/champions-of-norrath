extern s32 *D_010EB668[]; extern s32 *D_010EB66C[]; extern s32 *D_010EB670[];
extern s32 iSignalSema(s32); extern s32 D_001D0488[];
void func_0017A910(u32 arg0) {
 volatile s32 *base=(volatile s32*)((arg0|0x20000090));
 if(D_010EB668[0]) *D_010EB668[0]=base[-0x24];
 if(D_010EB66C[0]) *D_010EB66C[0]=base[-0x23];
 if(D_010EB670[0]) *D_010EB670[0]=base[0];
 iSignalSema(D_001D0488[0]);
}
