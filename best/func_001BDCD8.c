s32 func_0013CCC8(f32*,s32,s32,s32,s32,s32,s32,s32,s32,s32); s32 func_001637A8(void*); s32 func_001639E8(void*); s32 func_00165DC0(char*,char*);
void func_00180578(void); void func_00191490(void*,s32,void*,s32); void func_001B01B0(s32,void*,s32); void func_001BBF28(s32*); void func_001C7688(void); void func_0024D308(s32,s32,f32);
extern u8 D_00408600[]; extern s32 D_004281A8; extern char D_00468EC8[];
s8 D_00483AC8; s32 D_00483F14; s32 D_00483F18; s8 D_004844E0; s32 D_00484538; s32 D_00484A34;
extern char D_00484A48[]; extern char D_00484A80[]; extern u8 D_007D0440[]; extern s32 func_001BC948;
void func_001BDCD8(s32 mode,s32 index) {
 f32 v[3]; s32 i,n; u8 *p,*base; void *obj;
 base=D_00408600; func_001C7688(); D_00483F14=1; i=index*0x5DB0; D_00483F18=1; D_004844E0=0; D_00483AC8=0;
 p=base+i+0xF0; p[2]=0; p[1]=index; func_00180578();
 if(mode==1) { func_0024D308(func_00165DC0(D_00484A48,D_00468EC8),0,1.0f); func_001BBF28(&D_004281A8); p=base+i+0x50; p[8]++; }
 obj=&D_004281A8; n=1;
 do { n--; *(s8*)((u8*)obj+0x10)=mode; *(s32*)((u8*)obj+0x50)=0; if((mode^1)==0) *(s32*)((u8*)obj+0x50)=5;
 *(s32*)((u8*)obj+8)=0x140; *(s32*)((u8*)obj+0xC)=0x1C0; *(s32*)((u8*)obj+0x24)=0; *(s32*)((u8*)obj+0x18)=0; *(s32*)((u8*)obj+0x3C)=0; *(s32*)((u8*)obj+0x4C)=0; *(s32*)((u8*)obj+0x34)=-1; *(s32*)obj=0; *(s32*)((u8*)obj+4)=0; obj=(u8*)obj+0x74;
 } while(n>=0);
 if(*(s8*)(base+index*0x5DB0+0xF1)!=-1 || D_00484538==1) { v[0]=41.0f; v[1]=151.0f; v[2]=46.0f; p=D_007D0440+index*0x28; func_0013CCC8(v,0,0,0,0,0,0,0,0,0x80); func_001637A8(p); func_001B01B0(index,p,1); func_001639E8(p); D_004281A8=0; }
 D_00484A34=2; func_00191490(&func_001BC948,0x32,D_00484A80,1);
}
