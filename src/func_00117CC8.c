typedef struct { s32 v[8]; } Elem20;
typedef struct { Elem20 *data; s32 cap; s32 unk8; s32 count; } Vec20;
void ovl_ntgui2_func_00117778(Vec20 *);
void func_00117CC8(Vec20 *vec,s32 idx,Vec20 *src) {
 s32 n=src->count;
 s32 i;
 while(vec->count+n>vec->cap) ovl_ntgui2_func_00117778(vec);
 for(i=vec->count+n-1;i>=idx+n;i--) vec->data[i+1]=vec->data[i];
 for(i=0;i<n;i++) vec->data[idx+i]=src->data[i];
 vec->count+=n;
}
