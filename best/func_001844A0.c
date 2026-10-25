extern s32 D_003627C0; extern s32 D_003628C0; extern u8 func_001D1C80[]; extern u8 func_001E23F8[];
extern s32 func_00182948(s32); extern s32 func_001835C0(void*,s32,void*); extern s32 func_00196B88(void*); extern s32 func_1967D8(void*,s32); extern s32 func_0019BB84(void*); extern s32 func_00181BD8(void);
void func_001844A0(void) {
 u8 *p=func_001D1C80+0x6c0;
 func_00182948(1);
 for(s32 i=0;i<6;i++) func_001835C0(&D_003627C0,i,p);
 s32 *q=(s32*)(p+0x470)+(*(s32*)(p+0x5bd0))*0x3a4;
 func_00196B88(q); func_1967D8(q,*(s32*)((u8*)q+0x54));
 if(&D_003628C0) func_0019BB84(&D_003628C0);
 u8 v=p[0x5c58]; func_001E23F8[0x48]=v;
 if(v==0){func_00181BD8(); ((void(*)(s32,s32))(*(u32*)(p+0x5c68)))(1,0);}
 *(s32*)(p+0x5c60)=1; *(s32*)(p+0x5c50)=-1;
}
