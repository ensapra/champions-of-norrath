s32 func_002E4E48(s32,s32,void*,s32,s32);s32 func_002E4F58(s32,s32,void*,s32,s32);
s32 func_002E5A70(s32 a,s32*p,s32 b,s32 c){s32 r;*p=c;r=func_002E4E48(a,11,p,4,(c<<4)|4);if(r<0)return -542;r=*p;if(r>=0){r=func_002E4F58(a,b,p,1,r<<4);if(r>=0)r=*p;}return r;}
void *func_003021B0(void*,s32,s32);extern s32 D_008EBE3C[];
void func_002E8E28(u8*p){*(s32*)(p+0x100)=0;func_003021B0(p+0x104,0,8);*(s16*)(p+0x26)=0;*(s16*)(p+0x24)=0;func_003021B0(p+0xe0,0,32);*(s32*)(p+0x10)=0;*(s32*)(p+0x1c)=1;D_008EBE3C[0]=1;}
extern s32 D_00447F7C[];extern s32 *D_00447F78[];extern char D_0047C2A8[];void func_00302560(char*,...);
s32 func_002EA150(s32*p){s32 r=0x8000000a;if(D_00447F7C[0]!=-1){if(p){r=0;*p=**D_00447F78;**D_00447F78=0;}else{func_00302560(D_0047C2A8);r=0x80000004;}}return r;}
extern u8 D_008EA780[];extern s32 D_008EA938[];s32 func_002D8468(void*);
s32 func_002EAE08(s32 mode,s32*p){s32 r=0x8000000a;if(D_00447F7C[0]!=-1){if(!mode){do{r=func_002D8468(D_008EA780);}while(r);if(p)*p=D_008EA938[0];}else{r=func_002D8468(D_008EA780);if(!r&&p)*p=D_008EA938[0];}}return r;}
