typedef struct { s32 pad[4]; s32 count; s32 v[1]; } Vec;
extern s32 func_001AB150(Vec *, Vec *);
u32 func_001A82B8(Vec *a, Vec *b) {
    s32 count=b->count;
    s32 result=0;
    if(a->count < count) return 0;
    s32 last=count-1;
    s32 *bp=b->v;
    s32 *ap=a->v;
    s32 *endb=bp+last;
    s32 *enda=ap+last;
    u32 numerator=(u32)*enda;
    u32 q=numerator/((u32)*endb+1);
    if(q) {
        s32 carrylo=0, carryhi=0;
        u32 *src=(u32*)bp;
        u32 *dst=(u32*)ap;
        do {
            u32 x=*src++;
            u32 y=*dst;
            u32 low=((x&0xffff)*q)+carrylo;
            u32 high=((x>>16)*q)+(low>>16);
            s16 lo=(s16)((y&0xffff)-(low&0xffff)+carryhi);
            s16 hi=(s16)((y>>16)-(high&0xffff)+(lo>>16));
            *dst++=(u16)lo|((u32)(u16)hi<<16);
            carrylo=high>>16; carryhi=hi>>16;
        } while ((u32)dst<=(u32)enda);
        if(numerator==0) {
            do { if((u32)enda<=(u32)ap || *enda!=0) break; enda--; last--; } while(1);
            a->count=last;
        }
    }
    if(func_001AB150(a,b)>=0) {
        q++;
        s32 carrylo=0,carryhi=0;
        u32 *src=(u32*)bp,*dst=(u32*)ap;
        do {
            u32 x=*src++,y=*dst;
            u32 low=(x&0xffff)+carrylo;
            u32 high=(x>>16)+(low>>16);
            s16 lo=(s16)((y&0xffff)-(low&0xffff)+carryhi);
            s16 hi=(s16)((y>>16)-(high&0xffff)+(lo>>16));
            *dst++=(u16)lo|((u32)(u16)hi<<16);
            carrylo=high>>16;carryhi=hi>>16;
        } while((u32)dst<=(u32)endb);
        s32 *lastp=ap+last;
        if(*lastp==0) { while(lastp>ap && lastp[-1]==0){lastp--;last--;} a->count=last; }
        result=q;
    }
    return result;
}
