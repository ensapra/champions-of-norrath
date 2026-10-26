typedef struct { s16 x, mode, y; } Params;
typedef struct { s64 q0,q1,q2,q3,q4; } Out;
extern Params *func_0018D7A8(s32,s32,s32,s32,s32);
extern s32 func_0018D820(u16);
extern void _GetGsDxDyOffset(s16,void*,s32*,s32*,s32*);
extern void func_001AF710(void*,s16,u16);
extern u8 jtbl_004C006C[];
void func_0018D8D0(Out *o,s16 a1,s16 a2,s16 a3,s16 a4,s16 a5) {
 s32 sp0,sp4,sp8,spC, tlo,tlo2,v32,v33,v5,v52,vlo; s64 v10,v2,v22,v3,v7,v72; u16 t4,t6; u32 t22; Params *p;
 p=func_0018D7A8((s32)a1<<16,(s32)a2<<16,(s32)a3<<16,(s32)a4<<16,(s32)a5<<16); t4=p->mode;
 if((u32)(t4-2)>=2){if(func_0018D820(t4)){_GetGsDxDyOffset((s16)p->mode,&sp0,&sp4,&sp8,&spC);}else goto block4;}else {block4: spC=0;sp8=0;sp4=0;sp0=0;}
 t6=p->x; o->q0=0x66; v2=2; if((s16)p->x){v2=3;if(!p->y)v2=1;} o->q1=v2; o->q2=((a1&15)<<15)|(((a2+63)>>6&63)<<9);
 switch((s16)p->mode){
 case 2:
  if((s16)t6==1){tlo=(a2+0x9ff)/a2;v7=((a5+sp4+0x32)&0xfff)<<12;v10=(tlo-1)<<23;v3=((tlo*a2)-1)<<32;v5=((a4*tlo)+(sp0+0x27c))&0xfff;if(p->y){v32=v10|v3;v22=(a3*2)-1;}else{v22=a3-1;v32=v10|v3;}o->q3=v32|(v5|(v22<<44))|v7;
  }else{vlo=(a2+0x9ff)/a2;v72=(a3-1)<<44;v52=sp0+0x27c;v33=a5+sp4+0x19;goto block20;} break;
 case 3:
  if((s16)t6==1){tlo2=(a2+0x9ff)/a2;v7=((a5+sp4+0x48)&0xfff)<<12;v10=(tlo2-1)<<23;v3=((tlo2*a2)-1)<<32;v5=((a4*tlo2)+(sp0+0x290))&0xfff;if(p->y){v32=v10|v3;v22=(a3*2)-1;}else goto block17;goto block18;}
  vlo=(a2+0x9ff)/a2;v72=(a3-1)<<44;v52=sp0+0x290;v33=a5+sp4+0x24;goto block20;
 case 0x50:
  t22=0x2d0-a2;o->q3=((s64)(a3-1)<<44)|((a2*2-1)<<32)|(((((s32)(t22+(t22>>31))>>1)*2)+sp0+(a4*2+0xe8))&0xfff|0x800000)|((s64)((a5+sp4+0x23)&0xfff)<<12);break;
 default: func_001AF710(jtbl_004C006C+0xe504,(s16)p->mode,t6);break;
 }
 goto done;
 block17:v22=a3-1;v32=v10|v3;
 block18:o->q3=v32|(v5|(v22<<44))|v7;goto done;
 block20:o->q3=((s64)(vlo-1)<<23)|((s64)(vlo*a2-1)<<32)|(((a4*vlo+v52)&0xfff)|v72)|((s64)((v33)&0xfff)<<12);
 done:o->q4=0;
}
