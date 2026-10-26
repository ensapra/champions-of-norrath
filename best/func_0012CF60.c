s32 D_0048385C,D_00483860,D_00483850,D_004839E8,D_004839EC,D_004839F0,D_004839F4,D_00483880,D_00483884,D_00484CD8;
s8 D_0048382A,D_00486808,D_00486809,D_0048680A,D_0048680B,D_0048680C,D_00485BEC; u64 D_00486830;
extern u8 D_00333130[],D_00333278[],D_00333288[],D_00408600[],D_0042E300[],D_00438910[],D_004609B0[],D_004F3E80[],D_004F3E90[],D_004F3680[],D_004E2280[];
s32 func_003021B0(void*,void*,s32);s32 func_002E5348(void*,void*,void*,s32,s32,s32);s32 func_002E53B8(void*,void*,s32,s32);void func_00251058(char*);s32 func_0025B3B8(s32);s32 func_0025B3D0(s32);s32 func_0025B450(s32);void func_0025B528(s32,s32,s32);void func_00144368(void*,s32);s32 func_00304640(void*);s32 func_0025A280(void);
void func_0012CF60(void) {
 u8 frame[0xBBE0]; u8 *table,*meta,*ctrl,*cfg; s32 i,j,k,v; u8 *p;
 D_0048385C=0;
 if(D_0048382A) {
   func_003021B0(frame,0,0x40);
   v=func_002E5348(D_004F3E90,D_004F3680,frame,0,0,0xBB8);
   D_00483860=func_002E53B8(D_004F3E90,D_004F3680,v,0x3E8);
   D_004E2280[0]=D_004F3E80[4];D_004E2280[1]=D_004F3E80[5];D_004E2280[2]=D_004F3E80[6];D_004E2280[3]=D_004F3E80[7];
   D_004E2280[0x44D4]=1;D_0048385C=1;
   for(i=0;i<4;i++) *(u32*)(D_004E2280+0x44C0+i*0x44E0)=1;
 } else {
   table=D_00333278;meta=D_00333130;ctrl=D_00333288;cfg=D_004F3E90;
   if(meta[0]&2)func_00251058((char*)D_00438910);
   if(meta[0]&6) {
     for(i=0;i<128;i++) {p=frame+0x18C+i*0x48+(i>=64?8:0);for(j=0;j<4;j++)*(s16*)(p+0x3C-j*8)=-1;p[0x20]=p[0x21]=0xFF;for(j=0;j<4;j++){*(s16*)(p+0x10+j*2)=0;*(s16*)(p+0x18+j*2)=0;}}
     v=func_0025B3B8(0);
     for(i=0;i<0x5DA0;i+=8) *(u64*)(frame+0x40+i)=*(u64*)((u8*)v+i);
     for(i=0;i<meta[6];i++){func_003021B0(table+i*0xFC,0,0xFC);for(j=0;j<meta[4];j++){p=table+i*0xFC+j;p[0]=0;}}
   }
   func_00144368(D_004609B0,0x8000);
   func_003021B0(frame+0x5DF0,0,0x40);
   v=func_002E5348(D_004F3E90,D_004F3680,frame+0x5DF0,0,0,0xBB8);
   D_004839E8=func_002E53B8(D_004F3E90,D_004F3680,v,0x3E8);
   D_0048680B=-1;D_00483880=0;D_00483884=0;D_00486808=0;D_00486809=0;D_0048680A=0;D_0048680C=0;D_004839F4=0;D_00486830=0;
   for(i=0;i<(s8)meta[4];i++){for(j=0;j<0xFC;j++)table[j]=0;for(k=0;k<(s8)meta[6];k++){p=table+k*0xFC;p[0xC]=0;p[0xD]|=1;}}
   func_0025B3D0(0);
   for(i=0;i<0x5DA0;i+=8)*(u64*)(frame+0x5E30+i)=*(u64*)(D_00408600+i);
   func_00304640(table+0x68); if(ctrl[0]) D_004839F4=cfg[0];
   if(!(meta[0]&1))D_004839F0=func_0025A280();else D_004839F0=-1;
 }
}
