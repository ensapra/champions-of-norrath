typedef struct { s32 sem; void *reply; s32 len; s32 arg1; u8 msg[0x400]; } T; extern T D_008E04C0; extern u8 D_008E1100[]; extern u8 D_008E1BC0[]; extern char D_004449F4[];
s32 CreateSema_2(void *); void DeleteSema_2(s32); void WaitSema_2(s32); s32 func_002D8EF8(s32); void func_002D8F28(void); void func_002D9028(void); s32 func_002D8270(void *,s32,s32,void *,s32,void *,s32,s32,s32);
s32 func_002DA9B8(s32 a0) {
 s32 stk[8]; s32 reply; s32 sem; s32 r; T *d=&D_008E04C0;
 func_002D8EF8(15);
 if(*(s32 *)D_004449F4!=0) d->arg1=a0; else { func_002D9028(); d->arg1=a0; }
 stk[1]=1; stk[2]=0; stk[5]=0; sem=CreateSema_2(stk);
 D_008E04C0.sem=sem; d->reply=&reply; d->len=4;
 r=func_002D8270(D_008E1BC0,15,0,d,16,D_008E1100,4,0,0);
 if(r<0){DeleteSema_2(sem);func_002D8F28();return -1;}
 r=*(s32 *)((u32)D_008E1100|0x20000000); func_002D8F28();
 if(r==0){DeleteSema_2(sem);return -1;}
 WaitSema_2(sem);DeleteSema_2(sem);return reply;
}
