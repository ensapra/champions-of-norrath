extern u8 D_00780B00[]; extern void func_00183DD0();
void func_00183178(u32 id, f32 *v, f32 a, f32 b, s32 n, f32 c, s32 d) {
 s32 i,k,q; u8 *p; volatile f32 temp[160];
 if(!id)return; p=D_00780B00+(((id&255)*65)*16); if(*(s16*)(p+0x400)!=id)return;
 k=n-1; q=d/k; *(u8*)(p+0x405)=0;*(u8*)(p+0x404)=0;*(u16*)(p+0x402)=0;*(s16*)(p+0x408)=q*k;
 if(k<=0)return; for(i=0;i<k;i++){temp[i]=v[i]; if(temp[i])func_00183DD0();}
}
