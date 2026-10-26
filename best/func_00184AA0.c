typedef signed int s128 __attribute__((mode(TI)));typedef unsigned int u128 __attribute__((mode(TI)));typedef union {u32 lo;s128 q;} SQ;typedef union {u32 lo;u128 q;} UQ;
extern u8 func_001D26E8[],func_001D7EB0[];extern s32 func_00183838(void *,void *,s32,s128,u128,s128);extern void func_00183888(void *,void *,s32,s128,u128,s128);
void func_00184AA0(void){u8 *cfg=func_001D7EB0+0x410;u32 count=*(u32 *)(cfg+0xc),i,j,k,idx,n;u8 *entry,*base,*slot,*list;SQ q7,q9;UQ q8;
for(i=0;i<6;i++){entry=func_001D26E8+0xc8+i*0xe90;if(*(u32 *)(entry+0x44)!=2)continue;for(j=0;j<*(u32 *)(entry+0x68);j++){base=*(u8 **)(entry+0x78)+j*0x198;for(k=0;k<8;k++){slot=base+k*0x30;if(*(u16 *)(slot+4))continue;slot+=8;if(!*(u32 *)(slot+4)||!*(u32 *)slot)continue;
list=*(u8 **)(cfg+8);idx=0;while(idx<count){u8 *p=list+idx*0x28;if(!*(u32 *)(p+4)&&*(u32 *)p==*(u32 *)slot)break;idx++;}
if(idx==count){n=0;while(n<count){q7.lo=j*0x198;q9.lo=i;q8.lo=k;if(func_00183838(slot,list+n*0x28,10,q7.q,q8.q,q9.q)==0)break;n++;}
if(count<500&&n==count){q7.lo=j*0x198;q9.lo=i;q8.lo=k;func_00183888(list+count*0x28,slot,10,q7.q,q8.q,q9.q);*(u32 *)(cfg+0xc)=++count;}
}}}}}
