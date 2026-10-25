typedef struct __attribute__((packed,aligned(4))) { u64 a,b,c; s32 d; } Elem1C;
typedef struct { Elem1C *data; s32 cap; s32 unk8; s32 count; } Vec1C;
void func_00106288(Vec1C *);
void func_00106828(Vec1C *vec,s32 idx,Vec1C *src) {
 s32 n=src->count;
 s32 i;
 while(vec->count+n>vec->cap) func_00106288(vec);
 for(i=vec->count+n-1;i>=idx+n;i--) vec->data[i+1]=vec->data[i];
 for(i=0;i<n;i++) vec->data[idx+i]=src->data[i];
 vec->count+=n;
}
