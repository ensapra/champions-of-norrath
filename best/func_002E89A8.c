extern u8 D_008EBDD8[],D_008E8C80[],D_008E8E80[],D_008E8E84[];extern u8 func_002E9068;extern s32 WaitSema_2(s32);extern s32 func_002D8270(void*,s32,s32,void*,s32,void*,s32,void*,void*);extern s32 func_002E7CE8(void*);extern s32 func_002E7E38(void*);extern s32 func_002E7F58(s16);extern s32 func_002E8490(void*);extern s32 func_002E86D8(void*);extern void func_002E8898(void);
#define I32(p,o)(*(s32*)((u8*)(p)+(o)))
#define U8(p,o)(*((u8*)(p)+(o)))
#define S16(p,o)(*(s16*)((u8*)(p)+(o)))
void func_002E89A8(void){s32 i,n,r;u8*p,*q,*curr,total; s16*sp; s16 type;
total=U8(D_008EBDD8,0x40)+U8(D_008EBDD8,0x44);U8(D_008E8C80,3)=16;U8(D_008E8C80,0x202)=total;U8(D_008E8C80,0x200)=0;U8(D_008E8C80,0x201)=0;
if(I32(D_008EBDD8,0x40)>0){i=0;sp=(s16*)(D_008EBDD8+0x8c);do{*sp=-1;i++;sp+=0x88;}while(i<I32(D_008EBDD8,0x40));}
if(I32(D_008EBDD8,0x44)>0){i=0;sp=(s16*)(D_008EBDD8+0x4cc);do{*sp=-1;i++;sp+=0x34;}while(i<I32(D_008EBDD8,0x44));}
func_002E8898();
if(I32(D_008EBDD8,0x50)==0){do{func_002D8270(D_008EBDD8,1,1,D_008E8E80,0x90,D_008E8E80,0x90,&func_002E9068,D_008E8E80);WaitSema_2(I32(D_008EBDD8,0x28));if(I32(D_008EBDD8,0x50)!=U8(D_008E8E80,0))I32(D_008EBDD8,0x50)=U8(D_008E8E80,0);if(I32(D_008EBDD8,0x54)!=U8(D_008E8E80,1))I32(D_008EBDD8,0x54)=U8(D_008E8E80,1);n=I32(D_008EBDD8,0x40)+I32(D_008EBDD8,0x44);for(i=0,p=D_008E8E84;i<n;i++,p+=16){type=S16(p,2);if(type==0)func_002E7F58(S16(p,4));else if(type==1)func_002E7CE8(p);else if(type==2)func_002E7E38(p);}}while(I32(D_008EBDD8,0x50)==0);}
do{curr=D_008E8C80;p=D_008EBDD8;if(U8(curr,0x200)!=I32(p,0x50)||U8(curr,0x201)!=I32(p,0x54)){q=curr+0x200;func_002D8270(p,1,1,q,0x90,q,0x90,&func_002E9068,q);WaitSema_2(I32(p,0x28));if(I32(p,0x50)!=U8(q,0))I32(p,0x50)=U8(q,0);if(I32(p,0x54)!=U8(q,1))I32(p,0x54)=U8(q,1);n=I32(p,0x40)+I32(p,0x44);for(i=0,q=curr+0x204;i<n;i++,q+=16){type=S16(q,2);if(type==0)func_002E7F58(S16(q,4));else if(type==1)func_002E7CE8(q);else if(type==2)func_002E7E38(q);}}
curr=D_008E8C80;p=D_008EBDD8;func_002D8270(p,2,1,curr,0x1d0,curr,0x1d0,&func_002E9068,curr);WaitSema_2(I32(p,0x28));if(I32(p,0x3c)!=0){r=func_002D8270(p,4,1,0,0,0,0,&func_002E9068,0);if(r<0)I32(p,0x3c)=0;else{WaitSema_2(I32(p,0x28));I32(p,0x3c)=0;}continue;}if(I32(p,0x50)!=U8(curr,0))I32(p,0x50)=U8(curr,0);if(I32(p,0x54)!=U8(curr,1))I32(p,0x54)=U8(curr,1);n=U8(curr,2);for(i=0,q=curr+4;i<n;i++,q+=28){type=S16(q,4);if(type==1)func_002E8490(q);else if(type==2)func_002E86D8(q);}}while(1);
}
