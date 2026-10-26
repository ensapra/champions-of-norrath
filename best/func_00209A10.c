typedef struct { unsigned char b[0x340]; } Obj;
extern f32 D_004813B0, D_004813B4, D_004813B8;
s32 func_001129F0(void*,void*);
u32 func_00153FA8(void*);
void func_00113460(void*);
void func_0010D250(void*,void*,s32);
void func_00160128(void*,s32,s32,s32,f32);
void func_00163BA0(void*);
void func_00191EF8(void*,s32,s32,s32,s32,void*,f32);
void func_00209A10(Obj *o,u32 mode) {
 unsigned char tmp[0x50]; u32 r,t; 
 if(func_001129F0(o,&mode)) return;
 switch(mode) {
 case 0: r=func_00153FA8(o)%300; *(s32*)(o->b+0x100)=*(s32*)(o->b+0x328)+r+0x78; func_00160128(o->b+0x120,*(s32*)(*(void**)(o->b+0x24)+0x3c),3,r,D_004813B0); break;
 case 1: func_00113460(o); func_0010D250(tmp+0x10,o,0xc8); __builtin_memcpy(tmp+0x20,tmp+0x10,0xc); __builtin_memcpy(o->b+0x110,tmp+0x20,0xc); func_00160128(o->b+0x120,*(s32*)(*(void**)(o->b+0x24)+0x4c),3,0,D_004813B4); break;
 case 5: case 8: case 9: mode=(u32)*(s16*)(o->b+0x23c); break;
 case 10: *(s32*)(o->b+0xc)|=9; r=func_00153FA8(o)<<16; t=func_00153FA8(o)%10; __builtin_memcpy(tmp+0x40,o->b+0x10,0xc); func_00191EF8(tmp+0x40,(s32)r>>16,6,1,t+10,tmp+0x40,(f32)(t+10)); func_00160128(o->b+0x120,*(s32*)(*(char**)(o->b+0x24)+((func_00153FA8(o)&3)*8)+0x1c),6,0,D_004813B8); if(*(s32*)(o->b+0xc)&2) func_00163BA0(o->b+0x120); { unsigned char *p=*(unsigned char**)(o->b+0x48)+0xc0; s16 off=*(s16*)p; void(*fn)(void)=*(void(**)(void))(p+4); fn(); } }
 *(s16*)(o->b+0x23c)=(s16)mode;
}
