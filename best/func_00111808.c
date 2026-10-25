typedef struct { s32 d[0x131]; } Item11808; typedef struct { Item11808 *items; s32 cap; s32 x; s32 count; } Vec11808; void func_00110EF0(Vec11808 *);
void func_00111808(Vec11808 *dst,Vec11808 *src){
 s32 n=src->count;
 if(dst->count+n>dst->cap) func_00110EF0(dst);
 s32 i=0;
 if(n>0) do { dst->items[dst->count+i]=src->items[i]; ++i; } while(i<n);
 dst->count+=n;
}
