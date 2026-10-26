typedef struct { unsigned char pad[0xC]; s32 unkC; } P;
typedef struct { unsigned char pad[0x24]; P *p; unsigned char pad2[0x3c4-0x28]; s32 c3c4; unsigned char pad3[4]; s32 c3c8,c3cc; } O;
extern f32 D_00480C94,D_00480CA0; extern u32 D_00480C98,D_00480C9C;
s32 func_0010EBF8(O*,s32); void func_0010D428(s32); void func_0010A428(O*,s32);
void func_00111830(O*,f32); void func_00111490(O*,f32); void func_001EEF20(O*); void func_001EEE68(O*);
s32 func_001EEF30(O*); u32 func_00153FA8(O*); void func_001EEA70(O*); void func_001EEC00(O*);
void func_00113128(O*); void func_00160010(void*,s32,s32,u32,f32,f32);
void func_001EE528(O *o) {
 s32 c, t; u32 x;
 func_0010D428(o->p->unkC);
 if (func_0010EBF8(o,o->p->unkC)) return;
 func_0010A428(o,0x258); func_00111830(o,1.0f); func_00111490(o,1.0f);
 c=*(s16*)((char*)o+0x23c);
 if(c==3||c==1||c==7) func_001EEE68(o); else func_001EEF20(o);
 c=*(s16*)((char*)o+0x23c);
 if(c==0) {
  if(*(s32*)((char*)o+0x3c8)<*(s32*)((char*)o+0x328)) {
   if(func_001EEF30(o)) { if(func_00153FA8(o)&1) { func_001EEC00(o); t=3; } else {func_001EEA70(o); t=1;} goto cb; }
  }
  if(*(s32*)((char*)o+0x3cc)<*(s32*)((char*)o+0x328) && !(*(u16*)((char*)o+0x126)&0x20)) {
   x=func_00153FA8(o)%300; *(s32*)((char*)o+0x3cc)=*(s32*)((char*)o+0x328)+x+0x78;
   func_00160010((char*)o+0x120,o->p->pad[0x70],0x20,x,D_00480C94,D_00480C94);
  } return;
 }
 if(c==13) {
  if(*(s32*)((char*)o+0x3c8)<*(s32*)((char*)o+0x328) && !*(s32*)((char*)o+0x3c4)) {
   if(func_001EEF30(o) && !(*(u16*)((char*)o+0x126)&8)) { if(func_00153FA8(o)&1){func_001EEC00(o);t=3;}else{func_001EEA70(o);t=1;} goto cb; }
  }
  if(*(s32*)((char*)o+0x3cc)<*(s32*)((char*)o+0x328) && !(*(u16*)((char*)o+0x126)&0x20)) {
   x=func_00153FA8(o)%480; *(s32*)((char*)o+0x3cc)=*(s32*)((char*)o+0x328)+x+0xf0;
   if(func_00153FA8(o)&1) func_00160010((char*)o+0x120,*(s32*)((char*)o->p+0x94),0x20,D_00480C9C,D_00480CA0,D_00480CA0);
   else func_00160010((char*)o+0x120,*(s32*)((char*)o->p+0x8c),0x20,D_00480C98,D_00480CA0,D_00480CA0);
  } return;
 }
 if(c==1||c==3) {
  if(*(s32*)((char*)o+0x3c8)<*(s32*)((char*)o+0x328)) {
   t=0; if(!(func_00153FA8(o)&1)) t=13;
   cb:
   { void **v=*(void***)((char*)o+0x48); s16 off=*(s16*)((char*)v+0xb8); ((void(*)(void*,s32))v[0xB8/4])((char*)o+off,t); } return;
  } func_00113128(o);
 }
}
