extern s32 func_0013FBB8(s32);
extern s32 D_010D1250[];
extern s32 func_001B9FD8[];
extern u8 func_001C6788[];
extern s32 D_001BAC80[];
void func_0013FC00(s32 arg0,s32 *arg1,s32 *arg2){
 switch(D_010D1250[1]){
 case 0:
  if(!(D_001BAC80[0]&1)){D_001BAC80[0]|=1;*(s32 *)(func_001C6788+0xBC)=0;*(s32 *)(func_001C6788+0xB8)=(s32)arg1;*(s32 *)(func_001C6788+0xC0)=func_0013FBB8(arg0);*(s32 *)(func_001C6788+0xC4)=(s32)arg1;*(s32 *)(func_001C6788+0xC8)=(s32)arg2;}return;
 case 1:
  if(!(D_001BAC80[0]&2)&&!(func_001B9FD8[0xCAC/4]&2)){D_001BAC80[0]|=2;*(s32 *)(func_001C6788+0xBC)=1;*(s32 *)(func_001C6788+0xB8)=(s32)arg1;*(s32 *)(func_001C6788+0xCC)=func_0013FBB8(arg0);*(s32 *)(func_001C6788+0xD0)=(s32)arg1;*(s32 *)(func_001C6788+0xD4)=(s32)arg2;}break;
 }
}
