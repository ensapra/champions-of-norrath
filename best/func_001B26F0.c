typedef struct { unsigned char pad0[0x14]; s32 dir,row,col,index,index2; unsigned char pad2c[0x10]; f32 t; } State;
extern s32 D_00332FD0[]; extern s32 D_007D03C8[]; extern s8 D_00483F55; extern f32 D_004805A4,D_004805AC; extern char D_00484930[],D_00466C30[];
void func_00159330(f32,f32,f32,f32,f32); s32 func_001B25B8(void*,s32,void*,s32); s32 func_001353A8(s32); s32 func_00165DC0(char*,char*); void func_0024D308(s32,s32,f32);
void func_001B26F0(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,State *s,s32 a6){
 s32 d,n; if(D_007D03C8[a0] || D_00483F55)return;
 if(a6==0){s32 *p=&D_00332FD0[a0*22+2]; *p &= 0xFFDFFFFF; *p &= 0xFFEFFFFF; *p &= 0xFF7FFFFF; *p &= 0xFFBFFFFF;}
 d=func_001B25B8(s,a4,s,a6); s->dir=d;
 if(a1>0){if(d==-1&&s->row<0)s->dir=0;if(d==1&&a2-1<s->row)s->dir=0;if(d==4&&a1<s->col+1)s->dir=0;if(d==2&&s->col-1<0)s->dir=0;}
 d=s->dir;
 if(d==-1||d==1){s->t+=D_004805A4;func_00159330(s->t,0,1,0,0);n=s->row;s->index2=(s32)((f32)(n*a4)+(f32)s->dir);if(s->index2>=n*a4+a4||a4*(n-1)>=s->index2){n+=s->dir;if(a6&&func_001353A8(a0))func_0024D308(func_00165DC0(D_00484930,D_00466C30),0,1);s->dir=0;s->t=0;s->row=n;s->index2=n*a4;}}
 else if(a3>0&&(d==4||d==2)){s->t+=D_004805AC;func_00159330(s->t,0,1,0,0);n=s->col;s->index=(s32)((f32)(n*a3)+(f32)(d-3));if(s->index>=n*a3+a3||a3*(n-1)>=s->index){n+=d;if(a6&&func_001353A8(a0))func_0024D308(func_00165DC0(D_00484930,D_00466C30),0,1);s->dir=0;s->t=0;s->col=n-3;s->index=(n-3)*a3;}}
}
