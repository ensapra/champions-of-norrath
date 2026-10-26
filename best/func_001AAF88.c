typedef struct {f32 x,y,z;} V3;extern s32 func_0016CD50(s32);extern void func_0016C238(s32,void *,V3 *,s16,s32,V3 *,void *,s32,f32);extern void func_00180DA0(void *,V3 *,V3 *,s32,f32);extern f32 D_007CB6E0[];u32 D_00483E5C;
void func_001AAF88(void *arg0,void *arg1){u8 *a=arg0,*b=arg1,*vt;s32 cnt1,cnt2,n,ctx;u32 seed;s16 off;s32 (*fn)(void *);V3 out,sp10,sp20;u8 sp30[0x10],sp40[0x10],sp50[0x10];f32 len,dx,dy,dz;
cnt1=func_0016CD50(*(s32 *)(a+0x534));vt=*(u8 **)(b+0x48);off=*(s16 *)(vt+0x80);fn=*(s32 (**)(void *))(vt+0x84);cnt2=func_0016CD50(fn(b+off));
n=99;do{seed=D_00483E5C*0x19660D+0x3C6EF35F;D_00483E5C=seed;*(V3 *)sp40=*(V3 *)(a+0x10);func_0016C238(*(s32 *)(a+0x534),a+0x120,(V3 *)sp40,*(s16 *)(a+0x38),((s32)(seed>>16))%cnt1,&sp10,sp30,0,1.0f);
vt=*(u8 **)(b+0x48);off=*(s16 *)(vt+0x80);fn=*(s32 (**)(void *))(vt+0x84);ctx=fn(b+off);seed=D_00483E5C*0x19660D+0x3C6EF35F;D_00483E5C=seed;*(V3 *)sp50=*(V3 *)(b+0x10);func_0016C238(ctx,b+0x120,(V3 *)sp50,*(s16 *)(b+0x38),((s32)(seed>>16))%cnt2,&sp20,sp30+4,0,1.0f);
dx=sp20.x-sp10.x;dy=sp20.y-sp10.y;dz=sp20.z-sp10.z;len=1.0f/__builtin_sqrtf(dx*dx+dy*dy+dz*dz);out.x=dx*len*30.0f;out.y=dy*len*30.0f;out.z=dz*len*30.0f;func_00180DA0(D_007CB6E0,&sp20,&out,0,0.0f);
}while(--n>=0);}
