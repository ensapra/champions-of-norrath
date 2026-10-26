typedef signed char s8;typedef unsigned char u8;typedef struct{char pad[0x1c];s8 kind,busy;u8 cat;char pad2[1];u64 flags;} Entity;typedef struct{Entity*ent;char pad[4];u64 flags;} Ctx;typedef struct{u32 v[9];} Table;typedef struct{char pad0[0x38];s32 f38;char pad1[0x70];s32 fac;} Global;
extern char D_00408600[],D_00466560[],D_00466608[],D_00466630[],D_00466640[],D_00466650[],D_00466660[],D_00466678[],D_00466690[],D_004666A8[],D_004666C0[],D_004666D8[],D_004666F0[],D_00466708[],D_00466720[],D_00466738[],D_00466750[],D_00466768[],D_00466780[],D_00466798[],D_00484828[],D_007CC5C8[];
extern Global D_00427288;s32 func_001B0C18(void);s32 func_001353A8(s32);s32 func_00165DC0(void*,void*);void func_0024D308(s32,s32,f32);s32 func_001671F8(void*);void func_001C76A0(s32,s32,s32,s32);void func_001D3E88(void*);void func_001D3AB0(void*,s32);s32 func_001ABB48(s32,s32,...);void func_001A1C98(s32,...);void func_001B01B0(s32,void*,s32);void func_00303EB8(void*,void*);void func_001AEC78(s32,Ctx*,s32);void func_001A5480(void);
void func_001AEC78(s32 id,Ctx *ctx,s32 flags) {
 char *st=D_00408600+id*0x5DB0; Table tbl; char sp30[0x30]; s32 p,a,b,c,t=-1,i; void *v;
 if(ctx->ent!=NULL && ctx->ent->kind!=15) {
   p=func_001B0C18();
   if(p!=0){if(func_001353A8(id)){c=func_00165DC0(D_00484828,D_00466560);func_0024D308(c,0,1.0f);}tbl=*(Table*)D_00466608;if(D_00427288.f38!=id)a=(D_00427288.fac==id);else a=0;b=func_001671F8(D_00466630);c=func_001671F8((void*)tbl.v[p]);func_001C76A0(id,b,c,a);return;}
   if(ctx->ent->busy==0&&ctx->ent->kind!=8){if(ctx->ent->cat==4||ctx->ent->cat==6){t=1;func_001D3E88(D_00466640);func_001D3AB0(D_00466650,1);}else{t=0;func_001D3E88(D_00466660);}}
   if(ctx->ent->kind==3){v=*(void**)(st+0x55c8);t=0;if(v)func_001AEC78(id,(Ctx*)v,0);}
   if(t!=-1)*(s8*)(st+0x5c14)=t;
   if(ctx->ent->busy==0){s32 *slots=(s32*)(st+0x55c8);for(i=0;i<2;i++)if(slots[i]==(s32)ctx)slots[i]=0;if(ctx->ent->kind==0&&func_001ABB48(id,0x40000,ctx->ent)>0){v=*(void**)(st+0x55c8);if(v&&((Entity*)((Ctx*)v)->ent)->kind==0){if(*(void**)(st+0x5588)!=v)func_001AEC78(id,(Ctx*)v,0);*(void**)(st+0x55d0)=ctx;}else ((void**)(st+8))[t]=ctx;}}
   v=*(void**)(st+8+ctx->ent->kind*4);if(v!=ctx)*(void**)(st+0x5580+ctx->ent->kind*4)=ctx;
   if(flags==0){u64 f=ctx->flags;char*s;if(f&0x800000){if((u8)(ctx->ent->cat-1)<4)s=D_00466678;else if(f&0x20000000)s=D_00466690;else s=D_004666A8;}else if(f&0x200000)s=D_004666C0;else if(ctx->ent->kind==3)s=D_004666D8;else if(f&0x400000)s=D_004666F0;else if(f&0x40000){if((u8)(ctx->ent->cat-1)<3)s=D_00466708;else if(f&0x20000000)s=D_00466720;else s=D_00466738;}else if(f&0x100000)s=D_00466750;else if(f&0x80000)s=D_00466768;else if(f&0x1000000)s=D_00466780;else s=D_00466798;func_00303EB8(sp30,s);if(func_001353A8(id)){c=func_00165DC0(D_00484828,sp30);func_0024D308(c,0,1.0f);}func_001B01B0(id,D_007CC5C8+id*0x108,0);func_001A5480();}
 }
}
