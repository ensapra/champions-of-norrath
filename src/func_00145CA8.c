extern s32 D_010D44B0[],D_010D44D0[],D_010D44D4[],D_010D44E8[];
extern void func_0014D048(s32,s32*,s32*); extern void func_0014CF30(s32,s32*,s32*); extern void func_0014CE84(s32,s32*,s32*); extern void func_0014CE44(s32,s32,s32);
void func_00145CA8(void){
 s32 a,b,c,d,e,f; s32 idx=D_010D44E8[0];func_0014D048(D_010D44B0[idx],&a,&b);
 idx=D_010D44E8[0];func_0014CF30(D_010D44B0[idx],&c,&d);func_0014CE84(D_010D44D0[0],&e,&f);
 s32 diff=a-e;diff=diff<0?-diff:diff;
 if(diff>=3){s32 mid=e+(a+((c-20)>>1));mid>>=1;a=mid;func_0014CE44(D_010D44D0[0],mid,b-25);func_0014CE44(D_010D44D4[0],a,b+d+5);}
 else{s32 mid=a+((c-20)>>1);a=mid;func_0014CE44(D_010D44D0[0],mid,b-25);func_0014CE44(D_010D44D4[0],a,b+d+5);}
}
