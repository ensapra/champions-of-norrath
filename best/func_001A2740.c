typedef struct { char pad0[0x24]; s32 unk24; char pad28[0x98]; f32 unkC0; char padC4[0x24]; s8 unkE8[0x3C]; s8 unk124; char pad125[0x1C3]; s32 flags2E8; char pad2EC[8]; s32 val2F4; char pad2F8[0xC8]; s32 unk3C0; char pad3C4[0x80]; s32 unk440; char pad444[0x134]; s32 draw578; } ObjA;
s8 D_00484318;
s32 func_001D38B0(void);
s32 func_001A2740(ObjA *p) {
 s32 flags=p->flags2E8;
 if (flags & 0x20000000) goto done;
 if (D_00484318) {
   p->flags2E8=0;
   p->unkC0=0.0f;
   return 0;
 }
 if (func_001D38B0()) {
   p->flags2E8=0;
   p->unkC0=0.0f;
   return 0;
 }
 flags=p->flags2E8;
 if ((flags & 0x003C0000)==0) goto done;
 {
 f32 value=0.0f;
 s32 mode=0;
 if (flags & 0x00040000) { value=100.0f; mode=1; }
 else if(flags & 0x00080000) { value=150.0f; mode=2; }
 else if(flags & 0x00100000) { value=200.0f; mode=3; }
 else if(flags & 0x00200000) { value=250.0f; mode=3; }
 p->val2F4=value;
 return mode;
 }
done:
 return 0;
}
