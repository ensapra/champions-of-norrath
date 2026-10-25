typedef struct Q {s32 sema; s32 *resp; s32 f8; u32 len; s32 buf; u8 path[0x400]; u8 path2[0x400]; u8 payload[0x400]; u32 count; s32 id; u32 size; s32 pad; s32 pad2;} Q;
extern Q D_01109800; extern u8 D_0110AF00[],D_0110A440[]; extern s32 jtbl_004C006C[];
s32 CreateSema(void*,s32);void DeleteSema(s32);void WaitSema(s32);void func_001AFE98(void*,s32);s32 func_001B08B0(void*,s32,s32,void*,s32,s32,s32,s32,s32);void func_001B1538(s32);void func_001B1568(void);void func_001B1668(void);
s32 func_001B3C48(u8*n1,u8*n2,s32 id,s32 arg,u32 len){Q*q=&D_01109800;s32 i,j,ok,sema,v,sp[10],ret;func_001B1538(0x14);if(*(s32*)((u8*)jtbl_004C006C+0x3f30)==0)func_001B1668();
q->path[0]=n1[0];i=0;ok=len<0x401;if(n1[0]){i=1;while(i<0x400){q->path[i]=n1[i];if(!n1[i])break;i++;}}if(i==0x400)q->path[0x3ff]=0;
q->path2[0]=n2[0];j=0;if(n2[0]){j=1;while(j<0x400){q->path2[j]=n2[j];if(!n2[j])break;j++;}}if(j==0x400)q->path2[0x3ff]=0;
if(!ok){func_001B1568();return -7;}if(len>0)for(i=0;i<len;i++)q->payload[i]=((u8*)arg)[i];q->count=len;q->id=id;
sp[1]=1;sp[2]=0;sp[5]=0;sema=CreateSema(sp,0);q->resp=&ret;q->sema=sema;q->f8=4;func_001AFE98(q,0xc14);
if(func_001B08B0(D_0110AF00,0x14,0,q,0xc14,(s32)D_0110A440,4,0,0)<0){DeleteSema(sema);func_001B1568();return -11;}
v=*(s32*)((u32)D_0110A440|0x20000000);func_001B1568();if(!v){DeleteSema(sema);return -11;}WaitSema(sema);DeleteSema(sema);return ret;}
