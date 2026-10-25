void func_0014BBEC(void *,void *,void *,void *,void *,s32,s32,s32);
void func_0014C25C(s32 arg0,s32 arg1,s32 *arg2,s32 arg3,s32 arg4,u8 *arg5){
 s32 a,b,c,d,e,f,g,h; u32 x,y;
 func_0014BBEC(&a,&b,&c,arg2,arg2+1,arg3,0,arg0);
 func_0014BBEC(&d,&e,&f,arg2+2,arg2+3,arg3,0,arg0);
 x=((a<0?0:a)&255)|(((b<0?0:b)&255)<<8)|(((c<0?0:c)&255)<<16);
 y=((d<0?0:d)&255)|(((e<0?0:e)&255)<<8)|(((f<0?0:f)&255)<<16);
 func_0014BBEC(&a,&b,&c,&x,&y,arg4,0,arg1);
 arg5[0]=(u8)a;arg5[1]=(u8)b;arg5[2]=(u8)c;
}
