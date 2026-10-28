typedef struct { f32 x,y,z; } O12;
s32 func_00153FD0(void*,O12*,s32,s32);void func_00194390(void*,s32,s32);void func_00143830(void*);f32 func_0015A070(s16);f32 func_0015A100(s16);extern char D_00452F60[];s32 D_004844A4;
void func_002BDDB8(void*self,O12*src,s16 a2,s32 a3,s32 a4,s32 a5,s32 a6){
 O12 t=*src; O12 o; O12 *op; f32 x,y; s32 *p;
 func_00153FD0(self,&t,a4,0);
 *(void**)((char*)self+0x48)=D_00452F60;
 p=(s32*)((char*)self+0x54);
 *p=0;
 if(a4)func_00194390(p,a4,a4);
 *(s16*)((char*)self+0x58)=a3;*(s16*)((char*)self+0x38)=a2;
 op=&o;
 x=func_0015A070(a2)*350.0f;
 y=func_0015A100(*(s16*)((char*)self+0x38))*350.0f;
 op->x=x;
 op->y=y;
 op->z=0.0f;
 *(O12*)((char*)self+0x60)=*op;
 *(s32*)((char*)self+0x6c)=D_004844A4+0x3c;*(s32*)((char*)self+0x74)=a5;*(s32*)((char*)self+0x78)=a6;*(s32*)((char*)self+0x70)=0;func_00143830(self);}
